// See LICENSE for license details.
#ifndef _BOARD_GENESYS2_H_
#define _BOARD_GENESYS2_H_

#ifdef __cplusplus
    extern "C" {
#endif

#include "hbird_sdk_soc.h"

// GPIOA Bit Offset
#define SOC_SW_6_GPIO_OFS       28
#define SOC_SW_5_GPIO_OFS       27
#define SOC_SW_4_GPIO_OFS       26
#define SOC_SW_3_GPIO_OFS       25
#define SOC_SW_2_GPIO_OFS       24
#define SOC_SW_1_GPIO_OFS       23
#define SOC_SW_0_GPIO_OFS       22
#define SOC_BUTTON_R_GPIO_OFS   20
#define SOC_BUTTON_L_GPIO_OFS   7
#define SOC_BUTTON_D_GPIO_OFS   6
#define SOC_BUTTON_U_GPIO_OFS   21
// #define SOC_OLED_VDD_OFS    13
// #define SOC_OLED_VBAT_OFS   12
// #define SOC_OLED_SDIN_OFS   11
// #define SOC_OLED_DC_OFS     10
// #define SOC_OLED_RES_OFS    9
// #define SOC_OLED_SCLK_OFS   8
#define SOC_LED_5_GPIO_OFS      5
#define SOC_LED_4_GPIO_OFS      4
#define SOC_LED_3_GPIO_OFS      3
#define SOC_LED_2_GPIO_OFS      2
#define SOC_LED_1_GPIO_OFS      1
#define SOC_LED_0_GPIO_OFS      0

// GPIOA Bit Mask
#define SOC_SW_6_GPIO_MASK      (1 << SOC_SW_6_GPIO_OFS)
#define SOC_SW_5_GPIO_MASK      (1 << SOC_SW_5_GPIO_OFS)
#define SOC_SW_4_GPIO_MASK      (1 << SOC_SW_4_GPIO_OFS)
#define SOC_SW_3_GPIO_MASK      (1 << SOC_SW_3_GPIO_OFS)
#define SOC_SW_2_GPIO_MASK      (1 << SOC_SW_2_GPIO_OFS)
#define SOC_SW_1_GPIO_MASK      (1 << SOC_SW_1_GPIO_OFS)
#define SOC_SW_0_GPIO_MASK      (1 << SOC_SW_0_GPIO_OFS)
// #define SOC_OLED_VDD_MASK       (1 << SOC_OLED_VDD_OFS)
// #define SOC_OLED_VBAT_MASK      (1 << SOC_OLED_VBAT_OFS)
// #define SOC_OLED_SDIN_MASK      (1 << SOC_OLED_SDIN_OFS)
// #define SOC_OLED_DC_MASK        (1 << SOC_OLED_DC_OFS)
// #define SOC_OLED_RES_MASK       (1 << SOC_OLED_RES_OFS)
// #define SOC_OLED_SCLK_MASK      (1 << SOC_OLED_SCLK_OFS)
#define SOC_LED_5_GPIO_MASK     (1 << SOC_LED_5_GPIO_OFS)
#define SOC_LED_4_GPIO_MASK     (1 << SOC_LED_4_GPIO_OFS)
#define SOC_LED_3_GPIO_MASK     (1 << SOC_LED_3_GPIO_OFS)
#define SOC_LED_2_GPIO_MASK     (1 << SOC_LED_2_GPIO_OFS)
#define SOC_LED_1_GPIO_MASK     (1 << SOC_LED_1_GPIO_OFS)
#define SOC_LED_0_GPIO_MASK     (1 << SOC_LED_0_GPIO_OFS)
// #define SOC_BUTTON_C_GPIO_MASK    (1<<SOC_BUTTON_C_GPIO_OFS)
#define SOC_BUTTON_R_GPIO_MASK  (1 << SOC_BUTTON_R_GPIO_OFS)
#define SOC_BUTTON_L_GPIO_MASK  (1 << SOC_BUTTON_L_GPIO_OFS)
#define SOC_BUTTON_D_GPIO_MASK  (1 << SOC_BUTTON_D_GPIO_OFS)
#define SOC_BUTTON_U_GPIO_MASK  (1 << SOC_BUTTON_U_GPIO_OFS)

#define SOC_BUTTON_GPIO_MASK    (SOC_BUTTON_U_GPIO_MASK | SOC_BUTTON_D_GPIO_MASK | SOC_BUTTON_L_GPIO_MASK | SOC_BUTTON_R_GPIO_MASK)
#define SOC_LED_GPIO_MASK       (SOC_LED_5_GPIO_MASK | SOC_LED_4_GPIO_MASK | SOC_LED_3_GPIO_MASK | SOC_LED_2_GPIO_MASK | SOC_LED_1_GPIO_MASK | SOC_LED_0_GPIO_MASK)
#define SOC_SW_GPIO_MASK        (SOC_SW_0_GPIO_MASK | SOC_SW_1_GPIO_MASK | SOC_SW_2_GPIO_MASK | SOC_SW_3_GPIO_MASK | SOC_SW_4_GPIO_MASK | SOC_SW_5_GPIO_MASK | SOC_SW_6_GPIO_MASK)

#ifdef __cplusplus
}
#endif
#endif
