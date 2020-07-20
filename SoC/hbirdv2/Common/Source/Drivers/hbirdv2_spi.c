#include "hbirdv2.h"
#include "hbirdv2_spi.h"


int32_t spi_setup_cmd_addr(SPI_TypeDef *spi, int cmd, int cmdlen, int addr, int addrlen) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    int cmd_reg;
    cmd_reg = cmd << (32 - cmdlen);

    spi->SPICMD = cmd_reg;
    spi->SPIADR = addr;
    spi->SPILEN = (cmdlen & 0x3F) | ((addrlen << 8) & 0x3F00);

    return 0;
}

int32_t spi_setup_clk(SPI_TypeDef *spi, int clkdiv) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    spi->CLKDIV = clkdiv;
    
    return 0;
}

int32_t spi_setup_dummy(SPI_TypeDef *spi, int dummy_rd, int dummy_wr) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    spi->SPIDUM = ((dummy_wr << 16) & 0xFFFF0000) | (dummy_rd & 0xFFFF);
    
    return 0;
}

int32_t spi_set_datalen(SPI_TypeDef *spi, int datalen) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    volatile int old_len;
    old_len = spi->SPILEN;
    old_len = ((datalen << 16) & 0xFFFF0000) | (old_len & 0xFFFF);
    spi->SPILEN = old_len;
    
    return 0;
}

int32_t spi_start_transaction(SPI_TypeDef *spi, int trans_type, int csnum) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    spi->STATUS = ((1 << (csnum + 8)) & 0xF00) | ((1 << trans_type) & 0xFF);

    return 0;
}

int32_t spi_get_status(SPI_TypeDef *spi) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    return spi->STATUS;
}

int32_t spi_write_fifo(SPI_TypeDef *spi, int *data, int datalen) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }

    volatile int num_words, i;

    num_words = (datalen >> 5) & 0x7FF;

    if ( (datalen & 0x1F) != 0)
        num_words++;

    for (i = 0; i < num_words; i++) {
        while ((((spi->STATUS) >> 24) & 0xFF) >= 8);
        spi->TXFIFO = data[i];
    }

    return 0;
}

int32_t spi_read_fifo(SPI_TypeDef *spi, int *data, int datalen) {

    if (__RARELY(spi == NULL)) {
        return -1;
    }    

    volatile int num_words, i;

    num_words = (datalen >> 5) & 0x7FF;

    if ( (datalen & 0x1F) != 0)
        num_words++;

    for (i = 0; i < num_words; i++) {
        while ((((spi->STATUS) >> 16) & 0xFF) == 0);
        data[i] = spi->RXFIFO;
    }
    
    return 0;
}