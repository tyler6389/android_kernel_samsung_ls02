#ifndef __MACH_GPIO_MIDAS_H
#define __MACH_GPIO_MIDAS_H __FILE__

#include <mach/gpio.h>

extern void midas_config_gpio_table(void);
extern void midas_config_sleep_gpio_table(void);

#define GPIO_eMMC_EN		EXYNOS4_GPK0(2)

#define GPIO_BOOT_MODE		EXYNOS4_GPX0(3)

#define GPIO_PMIC_SDA		EXYNOS4_GPB(2)
#define GPIO_PMIC_SCL		EXYNOS4_GPB(3)

#define GPIO_CHARGER_SDA_18V	EXYNOS4_GPB(0)
#define GPIO_CHARGER_SCL_18V	EXYNOS4_GPB(1)
#define GPIO_CAM_VT_nRST	EXYNOS4_GPL2(1)
#define GPIO_VTCAM_MCLK		EXYNOS4212_GPM2(2)

#define GPIO_8M_CAM_SDA_18V	EXYNOS4_GPD1(0)
#define GPIO_8M_CAM_SCL_18V	EXYNOS4_GPD1(1)
#define GPIO_CAM_MCLK		EXYNOS4212_GPJ1(3)

/* Sensors & NFC*/
#define GPIO_PS_ALS_EN		EXYNOS4212_GPJ0(5)
#define GPIO_PS_ALS_SDA_28V	EXYNOS4_GPK1(1)
#define GPIO_PS_ALS_SCL_28V	EXYNOS4_GPK2(2)
#define GPIO_PS_ALS_INT		EXYNOS4_GPX0(2)

#define GPIO_GYRO_DE		EXYNOS4_GPL2(0)
#define GPIO_GYRO_INT		EXYNOS4_GPX0(0)
#define GPIO_GSENSE_SDA_18V	EXYNOS4_GPD1(2)
#define GPIO_GSENSE_SCL_18V	EXYNOS4_GPD1(3)

#define GPIO_MSENSOR_INT	EXYNOS4_GPX2(2)
#define GPIO_MSENSOR_SDA_18V	EXYNOS4_GPY2(4)
#define GPIO_MSENSOR_SCL_18V	EXYNOS4_GPY2(5)

#define GPIO_BSENSE_SDA_18V	EXYNOS4_GPY4(3)
#define GPIO_BENSE_SCL_18V	EXYNOS4_GPY4(4)
#define GPIO_BARO_INT		EXYNOS4_GPX0(1)

#define GPIO_NFC_SCL_18V	EXYNOS4_GPY0(0)
#define GPIO_NFC_SDA_18V	EXYNOS4_GPY0(1)
#define GPIO_NFC_IRQ		EXYNOS4_GPX1(7)
#define GPIO_NFC_EN			EXYNOS4_GPL2(6)
#define GPIO_NFC_FIRMWARE	EXYNOS4_GPL2(7)
/* Sensors & NFC*/

#define GPIO_PMU_RST		EXYNOS4_GPX3(2)

/* #define GPIO_BUCK1_EN_A		EXYNOS4212_GPJ1(1) */
/* #define GPIO_BUCK1_EN_B		EXYNOS4212_GPJ1(2) */
/* #define GPIO_BUCK2_EN		EXYNOS4_GPL0(0) */
#define GPIO_PMIC_IRQ		EXYNOS4_GPX0(7)
#define GPIO_IF_PMIC_IRQ	EXYNOS4_GPX1(5)

#define GPIO_PMIC_DVS1		EXYSNO4_GPY5(5)
#define GPIO_PMIC_DVS2		EXYSNO4_GPY5(6)
#define GPIO_PMIC_DVS3		EXYSNO4_GPY5(7)

#define GPIO_BUCK2_SEL		EXYNOS4_GPY6(0)
#define GPIO_BUCK3_SEL		EXYNOS4_GPY6(3)
#define GPIO_BUCK4_SEL		EXYNOS4_GPY6(4)

#define GPIO_TSP_INT		EXYNOS4_GPX0(4)
#define GPIO_TSP_SDA_18V	EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL_18V	EXYNOS4_GPA1(3)

#define GPIO_BT_nRST		EXYNOS4_GPL1(0)
#define GPIO_BT_EN		EXYNOS4_GPL0(6)
#define GPIO_BT_WAKE		EXYNOS4_GPX3(1)
#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX2(6)
#define IRQ_BT_HOST_WAKE	IRQ_EINT(22)

#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2

#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2

#define GPIO_BT_CTS		EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2

#define GPIO_BT_RTS		EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2

#define GPIO_GPS_CNTL		EXYNOS4_GPY3(6)
#define GPIO_GPS_nRST		EXYNOS4_GPY6(6)
#define GPIO_GPS_PWR_EN	EXYNOS4_GPY6(7)

#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2

#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2

#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF		2

#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF		2

#define GPIO_FLM_RXD		EXYNOS4_GPA1(4)
#define GPIO_FLM_RXD_AF		2

#define GPIO_FLM_TXD		EXYNOS4_GPA1(5)
#define GPIO_FLM_TXD_AF		2

#define GPIO_3_TOUCH_SCL	EXYNOS4_GPL0(1)
#define GPIO_3_TOUCH_SDA	EXYNOS4_GPL0(2)
#define GPIO_3_TOUCH_INT	EXYNOS4212_GPJ1(0)
#define GPIO_TOUCH_EN		EXYNOS4212_GPJ0(3)

#define GPIO_PWM0		EXYNOS4_GPD0(0)
#define GPIO_PWM1		EXYNOS4_GPD0(1)
#define GPIO_PWM2		EXYNOS4_GPD0(2)
#define GPIO_PWM3		EXYNOS4_GPD0(3)

#define GPIO_VIBTONE_EN		EXYNOS4212_GPJ0(6)

#define GPIO_WLAN_EN		EXYNOS4212_GPJ0(0)
#define GPIO_WLAN_EN_AF		1
#define GPIO_WLAN_HOST_WAKE	EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF
#define GPIO_WLAN_SDIO_CLK	EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF	2
#define GPIO_WLAN_SDIO_CMD	EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2
#define GPIO_WLAN_SDIO_D0	EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF	2
#define GPIO_WLAN_SDIO_D1	EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF	2
#define GPIO_WLAN_SDIO_D2	EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF	2
#define GPIO_WLAN_SDIO_D3	EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF	2

#define GPIO_TA_EN		EXYNOS4_GPL2(2)

#define GPIO_MHL_RST		EXYNOS4_GPF3(4)
#define GPIO_MHL_SEL		EXYNOS4_GPL0(3)
#define GPIO_MHL_INT		EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF		S3C_GPIO_SFN(0xF)
#define GPIO_MHL_WAKE_UP	EXYNOS4212_GPJ1(4)

#define GPIO_MHL_SDA_18V	EXYNOS4_GPY3(0)
#define GPIO_MHL_SCL_18V	EXYNOS4_GPY3(2)

#define GPIO_MHL_DSDA_28V	EXYNOS4_GPK(2)
#define GPIO_MHL_DSCL_28V	EXYNOS4_GPK(0)

#define GPIO_AP_HDMI_SDA	GPIO_MSENSOR_MHL_DSDA_28V
#define	GPIO_AP_HDMI_SDA_AF	GPIO_MSENSOR_MHL_DSDA_AF
#define GPIO_AP_HDMI_SCL	GPIO_MSENSOR_MHL_DSCL_28V
#define	GPIO_AP_HDMI_SCL_AF	GPIO_MSENSOR_MHL_DSCL_AF

#define GPIO_AP_SDA_18V		GPIO_MHL_SDA_18V
#define GPIO_AP_SCL_18V		GPIO_MHL_SCL_18V

#define MHL_INT_IRQ		gpio_to_irq(GPIO_MHL_INT)
#define MHL_WAKEUP_IRQ		gpio_to_irq(GPIO_MHL_WAKE_UP)

#define GPIO_ACC_INT		EXYNOS4_GPX1(4)


#define GPIO_CP_DUMP_INT	EXYNOS4_GPX1(2)
#define GPIO_IPC_SLAVE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_IPC_HOST_WAKEUP	EXYNOS4_GPX1(1)
#define GPIO_ACTIVE_STATE	EXYNOS4_GPY3(5)

#define GPIO_VOL_UP		EXYNOS4_GPX2(0)
#define GPIO_VOL_DOWN		EXYNOS4_GPX2(1)
#define GPIO_nPOWER		EXYNOS4_GPX2(7)
#define GPIO_OK_KEY		EXYNOS4_GPX3(5)


#define GPIO_ISP_RESET		EXYNOS4_GPY3(7)
#define GPIO_ISP_STANDBY	EXYNOS4_GPY5(4)


#define GPIO_FUEL_SDA		EXYNOS4_GPY4(0)
#define GPIO_FUEL_SCL		EXYNOS4_GPY4(1)

#define GPIO_MLCD_RST		EXYNOS4_GPY4(5)


#define GPIO_PDA_ACTIVE		EXYNOS4_GPY4(2)

#define GPIO_HW_REV0		EXYNOS4_GPY5(0)
#define GPIO_HW_REV1		EXYNOS4_GPY5(1)
#define GPIO_HW_REV2		EXYNOS4_GPY5(2)
#define GPIO_HW_REV3		EXYNOS4_GPY5(3)

#define GPIO_CAM_IO_EN		EXYNOS4_GPY6(1)
#define GPIO_ISP_CORE_EN	EXYNOS4_GPY6(2)
#define GPIO_8M_12V_EN		EXYNOS4_GPY6(5)

#define GPIO_CODEC_SDA_18V	EXYNOS4_GPD0(2)
#define GPIO_CODEC_SCL_18V	EXYNOS4_GPD0(3)

#define GPIO_WM8994_LDO		EXYNOS4212_GPJ0(4)

/* Definitions for XMM6262 and C2C */
#define CP_PMU_RST_N		EXYNOS4_GPX3(2)
#define CP_RESET_REQ_N		EXYNOS4_GPY4(6)
#define CP_ON			EXYNOS4_GPL2(5)
#define PDA_ACTIVE		EXYNOS4_GPY4(2)
#define PHONE_ACTIVE		EXYNOS4_GPX1(6)
#define PHONE_ACTIVE_IRQ	IRQ_EINT(14)
#define CP_DUMP_INT		EXYNOS4_GPX1(2)
#define CP_DUMP_INT_IRQ		IRQ_EINT(10)

#endif /* __MACH_GPIO_MIDAS_H */
