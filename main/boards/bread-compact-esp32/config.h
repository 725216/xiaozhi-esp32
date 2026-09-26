#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CHIP_NAME "ESP32"

// ==================== 功放输出 AMP8315 V3 ====================
#define AUDIO_I2S_GPIO_BCLK     GPIO_NUM_26
#define AUDIO_I2S_GPIO_LRCK     GPIO_NUM_27
#define AUDIO_I2S_GPIO_DOUT     GPIO_NUM_25
#define AUDIO_I2S_GPIO_MCLK     I2S_GPIO_UNUSED

// ==================== INMP441 I2S麦克风输入 ====================
#define AUDIO_I2S_MIC_GPIO_WS   GPIO_NUM_22
#define AUDIO_I2S_MIC_GPIO_SCK  GPIO_NUM_21
#define AUDIO_I2S_MIC_GPIO_DIN  GPIO_NUM_19

// ==================== 按键、LED 预留（后续加配件） ====================
// BOARD_BUTTON_GPIO 是小智唤醒按键，接GPIO0（开发板自带BOOT按键，可直接当唤醒键）
#define BOARD_BUTTON_GPIO       GPIO_NUM_0
#define BOARD_LED_GPIO          GPIO_NUM_NC  // NC=不使用，后面要加LED可以改成对应GPIO
#define BOARD_POWER_GPIO        GPIO_NUM_NC

#endif
