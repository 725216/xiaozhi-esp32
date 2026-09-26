#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// ===================== 编译宏区分两套引脚 =====================
#ifdef BOARD_VARIANT_coze
// -------- Coze自定义版本 --------
#define BOOT_BUTTON_GPIO        GPIO_NUM_5
#else
// -------- 原版 bread-compact-esp32 --------
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#endif

// ===================== I2S 麦克风 INMP441 =====================
#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_MIC_WS_GPIO    GPIO_NUM_4
#define AUDIO_I2S_MIC_SCK_GPIO   GPIO_NUM_5
#define AUDIO_I2S_MIC_DIN_GPIO   GPIO_NUM_6

// ===================== I2S 功放 MAX98357A =====================
#define AUDIO_I2S_SPK_DOUT_GPIO  GPIO_NUM_7
#define AUDIO_I2S_SPK_BCLK_GPIO  GPIO_NUM_15
#define AUDIO_I2S_SPK_LRCK_GPIO  GPIO_NUM_16

// ===================== OLED SSD1306 I2C屏幕 =====================
#define DISPLAY_I2C_SDA_GPIO     GPIO_NUM_41
#define DISPLAY_I2C_SCL_GPIO     GPIO_NUM_42
#define DISPLAY_WIDTH            128
#define DISPLAY_HEIGHT           64

// ===================== 音量按键（可选，不需要可以注释掉） =====================
#define VOLUME_UP_GPIO           GPIO_NUM_40
#define VOLUME_DOWN_GPIO         GPIO_NUM_39

// ===================== LED指示灯（ESP32无内置RGB，关闭） =====================
#define LED_GPIO                 GPIO_NUM_NC
#define LED_ON_LEVEL             1

// 电源使能，不使用
#define POWER_EN_GPIO            GPIO_NUM_NC
#define POWER_EN_ON_LEVEL        1

#endif
