
#ifndef __MFD_AIC3262_REGISTERS_H__
#define __MFD_AIC3262_REGISTERS_H__

#define MAKE_REG(book, page, offset) \
	(unsigned int)((book << 16)|(page << 8)|offset)

/* ****************** Book 0 Registers **************************************/

/* ****************** Page 0 Registers **************************************/
#define AIC3262_PAGE_SEL_REG		MAKE_REG(0, 0, 0)
#define AIC3262_RESET_REG		MAKE_REG(0, 0, 1)
#define AIC3262_REV_PG_ID		MAKE_REG(0, 0, 2)
#define AIC3262_REV_MASK		(0b01110000)
#define AIC3262_REV_SHIFT		4
#define AIC3262_PG_MASK			(0b00000111)
#define AIC3262_PG_SHIFT		0
#define AIC3262_DAC_ADC_CLKIN_REG	MAKE_REG(0, 0, 4)
#define AIC3262_PLL_CLKIN_REG		MAKE_REG(0, 0, 5)
#define AIC3262_PLL_CLKIN_MASK		(0b00111100)
#define AIC3262_PLL_CLKIN_SHIFT		2
#define AIC3262_PLL_CLKIN_MCLK1		0
#define AIC3262_PLL_CLKIN_BCLK1		1
#define AIC3262_PLL_CLKIN_GPIO1		2
#define AIC3262_PLL_CLKIN_DIN1		3
#define AIC3262_PLL_CLKIN_BCLK2		4
#define AIC3262_PLL_CLKIN_GPI1		5
#define AIC3262_PLL_CLKIN_HF_REF_CLK	6
#define AIC3262_PLL_CLKIN_GPIO2		7
#define AIC3262_PLL_CLKIN_GPI2		8
#define AIC3262_PLL_CLKIN_MCLK2		9
#define AIC3262_CLK_VAL_MASK		0x7f
#define AIC3262_PLL_CLK_RANGE_REG	MAKE_REG(0, 0, 5)
#define AIC3262_PLL_PR_POW_REG		MAKE_REG(0, 0, 6)
#define AIC3262_PLL_PVAL_MASK		0x70
#define AIC3262_PLL_RVAL_MASK		0x0F

#define AIC3262_ENABLE_CLK_MASK		0x80
#define AIC3262_ENABLE_CLK		0x80

#define AIC3262_PLL_J_REG		MAKE_REG(0, 0, 7)
#define AIC3262_JVAL_MASK		0x3f
#define AIC3262_PLL_D_MSB		MAKE_REG(0, 0, 8)
#define AIC3262_DVAL_MSB_MASK		0xf
#define AIC3262_DVAL_LSB_MASK		0xff
#define AIC3262_PLL_D_LSB		MAKE_REG(0, 0, 9)
#define AIC3262_PLL_CKIN_DIV		MAKE_REG(0, 0, 10)

#define AIC3262_NDAC_DIV_POW_REG	MAKE_REG(0, 0, 11)
#define AIC3262_MDAC_DIV_POW_REG	MAKE_REG(0, 0, 12)
#define AIC3262_DOSR_MSB_REG		MAKE_REG(0, 0, 13)
#define AIC3262_DOSR_MSB_MASK		0x3
#define AIC3262_DOSR_LSB_REG		MAKE_REG(0, 0, 14)
#define AIC3262_DOSR_LSB_MASK		0xFF

#define AIC3262_NADC_DIV_POW_REG	MAKE_REG(0, 0, 18)
#define AIC3262_MADC_DIV_POW_REG	MAKE_REG(0, 0, 19)
#define AIC3262_AOSR_REG		MAKE_REG(0, 0, 20)
#define AIC3262_CLKOUT_MUX		MAKE_REG(0, 0, 21)
#define AIC3262_CLKOUT_MDIV_VAL		MAKE_REG(0, 0, 22)
#define AIC3262_TIMER_REG		MAKE_REG(0, 0, 23)

#define AIC3262_LF_CLK_CNTL		MAKE_REG(0, 0, 24)
#define AIC3262_HF_CLK_CNTL_R1		MAKE_REG(0, 0, 25)
#define AIC3262_HF_CLK_CNTL_R2		MAKE_REG(0, 0, 26)
#define AIC3262_HF_CLK_CNTL_R3		MAKE_REG(0, 0, 27)
#define AIC3262_HF_CLK_CNTL_R4		MAKE_REG(0, 0, 28)
#define AIC3262_HF_CLK_TRIM_R1		MAKE_REG(0, 0, 29)
#define AIC3262_HF_CLK_TRIM_R2		MAKE_REG(0, 0, 30)
#define AIC3262_HF_CLK_TRIM_R3		MAKE_REG(0, 0, 31)
#define AIC3262_HF_CLK_TRIM_R4		MAKE_REG(0, 0, 32)
#define AIC3262_LDAC_POWER_MASK		0x80
#define AIC3262_RDAC_POWER_MASK		0x08
#define AIC3262_DAC_POWER_MASK		0x88
#define AIC3262_DAC_FLAG		MAKE_REG(0, 0, 37)
#define AIC3262_LADC_POWER_MASK		0x40
#define AIC3262_RADC_POWER_MASK		0x04
#define AIC3262_ADC_POWER_MASK		0x44
#define AIC3262_ADC_FLAG                MAKE_REG(0, 0, 36)
#define AIC3262_JACK_WITH_STEREO_HS	(0b00000010)
#define AIC3262_JACK_WITH_MIC		(0b00110000)
#define AIC3262_HEADSET_NOT_INSERTED	(0b00000011)

#define AIC3262_INT_STICKY_FLAG1		MAKE_REG(0, 0, 42)
#define AIC3262_LEFT_DAC_OVERFLOW_INT	0x80
#define AIC3262_RIGHT_DAC_OVERFLOW_INT	0x40
#define AIC3262_MINIDSP_D_BARREL_SHIFT_OVERFLOW_INT	0x20
#define AIC3262_LEFT_ADC_OVERFLOW_INT	0x08
#define AIC3262_RIGHT_ADC_OVERFLOW_INT	0x04
#define AIC3262_MINIDSP_A_BARREL_SHIFT_OVERFLOW_INT	0x02
#define AIC3262_INT_STICKY_FLAG2		MAKE_REG(0, 0, 44)
#define AIC3262_LEFT_OUTPUT_DRIVER_OVERCURRENT_INT	0x80
#define AIC3262_RIGHT_OUTPUT_DRIVER_OVERCURRENT_INT	0x40
#define AIC3262_BUTTON_PRESS_INT			0x20
#define AIC3262_HEADSET_PLUG_UNPLUG_INT			0x10
#define AIC3262_LEFT_DRC_THRES_INT			0x08
#define AIC3262_RIGHT_DRC_THRES_INT			0x04
#define AIC3262_MINIDSP_D_STD_INT			0x02
#define AIC3262_RIGHT_DRC_AUX_INT			0x01
#define AIC3262_INT_STICKY_FLAG3		MAKE_REG(0, 0, 45)
#define AIC3262_SPK_OVER_CURRENT_INT		0x80
#define AIC3262_LEFT_AGC_NOISE_INT			0x40
#define AIC3262_RIGHT_AGC_NOISE_INT			0x20
#define AIC3262_INT1_CNTL		MAKE_REG(0, 0, 48)
#define AIC3262_HEADSET_IN_MASK		0x80
#define AIC3262_BUTTON_PRESS_MASK	0x40
#define AIC3262_DAC_DRC_THRES_MASK	0x20
#define AIC3262_AGC_NOISE_MASK		0x10
#define AIC3262_OVER_CURRENT_MASK	0x08
#define AIC3262_OVERFLOW_MASK		0x04
#define AIC3262_SPK_OVERCURRENT_MASK	0x02
#define AIC3262_INT2_CNTL		MAKE_REG(0, 0, 49)
#define AIC3262_INT_FMT			MAKE_REG(0, 0, 51)

#define AIC3262_DAC_PRB			MAKE_REG(0, 0, 60)
#define AIC3262_ADC_PRB			MAKE_REG(0, 0, 61)
#define AIC3262_PASI_DAC_DP_SETUP	MAKE_REG(0, 0, 63)

#define AIC3262_DAC_MVOL_CONF		MAKE_REG(0, 0, 64)
#define AIC3262_DAC_LR_MUTE_MASK	0xc
#define AIC3262_DAC_LR_MUTE		0xc

#define AIC3262_DAC_LVOL		MAKE_REG(0, 0, 65)
#define AIC3262_DAC_RVOL		MAKE_REG(0, 0, 66)
#define AIC3262_HP_DETECT		MAKE_REG(0, 0, 67)
#define AIC3262_DRC_CNTL_R1		MAKE_REG(0, 0, 68)
#define AIC3262_DRC_CNTL_R2		MAKE_REG(0, 0, 69)
#define AIC3262_DRC_CNTL_R3		MAKE_REG(0, 0, 70)
#define AIC3262_BEEP_CNTL_R1		MAKE_REG(0, 0, 71)
#define AIC3262_BEEP_CNTL_R2		MAKE_REG(0, 0, 72)

#define AIC3262_ADC_CHANNEL_POW		MAKE_REG(0, 0, 81)
#define AIC3262_ADC_FINE_GAIN		MAKE_REG(0, 0, 82)
#define AIC3262_LADC_VOL		MAKE_REG(0, 0, 83)
#define AIC3262_RADC_VOL		MAKE_REG(0, 0, 84)
#define AIC3262_ADC_PHASE		MAKE_REG(0, 0, 85)

#define AIC3262_LAGC_CNTL		MAKE_REG(0, 0, 86)
#define AIC3262_LAGC_CNTL_R2		MAKE_REG(0, 0, 87)
#define AIC3262_LAGC_CNTL_R3		MAKE_REG(0, 0, 88)
#define AIC3262_LAGC_CNTL_R4		MAKE_REG(0, 0, 89)
#define AIC3262_LAGC_CNTL_R5		MAKE_REG(0, 0, 90)
#define AIC3262_LAGC_CNTL_R6		MAKE_REG(0, 0, 91)
#define AIC3262_LAGC_CNTL_R7		MAKE_REG(0, 0, 92)
#define AIC3262_LAGC_CNTL_R8		MAKE_REG(0, 0, 93)

#define AIC3262_RAGC_CNTL		MAKE_REG(0, 0, 94)
#define AIC3262_RAGC_CNTL_R2		MAKE_REG(0, 0, 95)
#define AIC3262_RAGC_CNTL_R3		MAKE_REG(0, 0, 96)
#define AIC3262_RAGC_CNTL_R4		MAKE_REG(0, 0, 97)
#define AIC3262_RAGC_CNTL_R5		MAKE_REG(0, 0, 98)
#define AIC3262_RAGC_CNTL_R6		MAKE_REG(0, 0, 99)
#define AIC3262_RAGC_CNTL_R7		MAKE_REG(0, 0, 100)
#define AIC3262_RAGC_CNTL_R8		MAKE_REG(0, 0, 101)
#define AIC3262_MINIDSP_ACCESS_CTRL	MAKE_REG(0, 0, 121)
/* ****************** Page 1 Registers **************************************/
#define AIC3262_PAGE_1			128

#define AIC3262_POWER_CONF		MAKE_REG(0, 1, 1)

#define AIC3262_AVDD_TO_DVDD_MASK	(0b00001000)
#define	AIC3262_AVDD_TO_DVDD		0x8
#define AIC3262_EXT_ANALOG_SUPPLY_MASK	(0b00000100)
#define	AIC3262_EXT_ANALOG_SUPPLY_OFF	0x4

#define AIC3262_LDAC_PTM		MAKE_REG(0, 1, 3)
#define AIC3262_RDAC_PTM		MAKE_REG(0, 1, 4)
#define AIC3262_CM_REG			MAKE_REG(0, 1, 8)
#define AIC3262_HP_CTL			MAKE_REG(0, 1, 9)
#define AIC3262_HP_DEPOP		MAKE_REG(0, 1, 11)
#define AIC3262_RECV_DEPOP		MAKE_REG(0, 1, 12)
#define AIC3262_MA_CNTL			MAKE_REG(0, 1, 17)
#define AIC3262_LADC_PGA_MAL_VOL	MAKE_REG(0, 1, 18)
#define AIC3262_RADC_PGA_MAR_VOL	MAKE_REG(0, 1, 19)

#define AIC3262_LINE_AMP_CNTL_R1	MAKE_REG(0, 1, 22)
#define AIC3262_LINE_AMP_CNTL_R2	MAKE_REG(0, 1, 23)

#define AIC3262_HP_AMP_CNTL_R1		MAKE_REG(0, 1, 27)
#define AIC3262_HP_AMP_CNTL_R2		MAKE_REG(0, 1, 28)
#define AIC3262_HP_AMP_CNTL_R3		MAKE_REG(0, 1, 29)

#define AIC3262_HPL_VOL			MAKE_REG(0, 1, 31)
#define AIC3262_HPR_VOL			MAKE_REG(0, 1, 32)
#define AIC3262_INT1_SEL_L		MAKE_REG(0, 1, 34)
#define AIC3262_CHARGE_PUMP_CNTL	MAKE_REG(0, 1, 35)
#define AIC3262_RAMP_CNTL_R1		MAKE_REG(0, 1, 36)
#define AIC3262_RAMP_CNTL_R2		MAKE_REG(0, 1, 37)
#define AIC3262_IN1L_SEL_RM		MAKE_REG(0, 1, 38)
#define AIC3262_IN1R_SEL_RM		MAKE_REG(0, 1, 39)
#define AIC3262_REC_AMP_CNTL_R5		MAKE_REG(0, 1, 40)
#define AIC3262_RAMPR_VOL		MAKE_REG(0, 1, 41)
#define AIC3262_RAMP_TIME_CNTL		MAKE_REG(0, 1, 42)
#define AIC3262_SPK_AMP_CNTL_R1		MAKE_REG(0, 1, 45)
#define AIC3262_SPK_AMP_CNTL_R2		MAKE_REG(0, 1, 46)
#define AIC3262_SPK_AMP_CNTL_R3		MAKE_REG(0, 1, 47)
#define AIC3262_SPK_AMP_CNTL_R4		MAKE_REG(0, 1, 48)
#define AIC3262_MIC_BIAS_CNTL		MAKE_REG(0, 1, 51)

#define AIC3262_LMIC_PGA_PIN		MAKE_REG(0, 1, 52)
#define AIC3262_LMIC_PGA_PM_IN4		MAKE_REG(0, 1, 53)
#define AIC3262_LMIC_PGA_MIN		MAKE_REG(0, 1, 54)
#define AIC3262_RMIC_PGA_PIN		MAKE_REG(0, 1, 55)
#define AIC3262_RMIC_PGA_PM_IN4		MAKE_REG(0, 1, 56)
#define AIC3262_RMIC_PGA_MIN		MAKE_REG(0, 1, 57)
#define AIC3262_HP_FLAG		        MAKE_REG(0, 1, 66)
#define AIC3262_SPKL_POWER_MASK		0x2
#define AIC3262_SPKR_POWER_MASK		0x1
#define AIC3262_HPL_POWER_MASK		0x20
#define AIC3262_HPR_POWER_MASK		0x10
/* MIC PGA Gain Registers */
#define AIC3262_MICL_PGA		MAKE_REG(0, 1, 59)
#define AIC3262_MICR_PGA		MAKE_REG(0, 1, 60)
#define AIC3262_HEADSET_TUNING1_REG	MAKE_REG(0, 1, 119)
#define AIC3262_HEADSET_DETECTOR_PULSE_MASK (0b11000000)
#define AIC3262_HEADSET_DETECTOR_PULSE_RESET (0b10000000)
#define AIC3262_MIC_PWR_DLY		MAKE_REG(0, 1, 121)
#define AIC3262_REF_PWR_DLY		MAKE_REG(0, 1, 122)
#define AIC3262_CHIP_REF_PWR_ON_MASK	0x4
#define AIC3262_CHIP_REF_PWR_ON		0x4
/* ****************** Page 4 Registers **************************************/
#define AIC3262_PAGE_4			512
#define AIC3262_ASI1_BUS_FMT		MAKE_REG(0, 4, 1)
#define AIC3262_ASI_SELECTION_MASK	(0b11100000)
#define AIC3262_ASI_DATA_WORD_LENGTH_MASK	(0b00011000)
#define AIC3262_ASI_BCLK_N_MASK		(0b01111111)
#define AIC3262_ASI1_LCH_OFFSET		MAKE_REG(0, 4, 2)
#define AIC3262_ASI1_RCH_OFFSET		MAKE_REG(0, 4, 3)
#define AIC3262_ASI1_CHNL_SETUP		MAKE_REG(0, 4, 4)
#define AIC3262_ASI1_MULTI_CH_SETUP_R1	MAKE_REG(0, 4, 5)
#define AIC3262_ASI1_MULTI_CH_SETUP_R2	MAKE_REG(0, 4, 6)
#define AIC3262_ASI1_ADC_INPUT_CNTL	MAKE_REG(0, 4, 7)
#define AIC3262_ASI1_DAC_OUT_CNTL	MAKE_REG(0, 4, 8)
#define AIC3262_ASI1_ADC_OUT_TRISTATE	MAKE_REG(0, 4, 9)
#define AIC3262_ASI1_BWCLK_CNTL_REG	MAKE_REG(0, 4, 10)
#define AIC3262_ASI1_BCLK_N_CNTL	MAKE_REG(0, 4, 11)
#define AIC3262_ASI1_BCLK_N		MAKE_REG(0, 4, 12)
#define AIC3262_ASI1_WCLK_N		MAKE_REG(0, 4, 13)
#define AIC3262_ASI1_BWCLK_OUT_CNTL	MAKE_REG(0, 4, 14)
#define AIC3262_ASI1_DOUT_CNTL		MAKE_REG(0, 4, 15)
#define AIC3262_ASI2_BUS_FMT	        MAKE_REG(0, 4, 17)
#define AIC3262_ASI2_LCH_OFFSET		MAKE_REG(0, 4, 18)
#define AIC3262_ASI2_ADC_INPUT_CNTL	MAKE_REG(0, 4, 23)
#define AIC3262_ASI2_DAC_OUT_CNTL	MAKE_REG(0, 4, 24)
#define AIC3262_ASI2_BWCLK_CNTL_REG	MAKE_REG(0, 4, 26)
#define AIC3262_ASI2_BCLK_N_CNTL	MAKE_REG(0, 4, 27)
#define AIC3262_ASI2_BCLK_N		MAKE_REG(0, 4, 28)
#define AIC3262_ASI2_WCLK_N		MAKE_REG(0, 4, 29)
#define AIC3262_ASI2_BWCLK_OUT_CNTL	MAKE_REG(0, 4, 30)
#define AIC3262_ASI2_DOUT_CNTL		MAKE_REG(0, 4, 31)
#define AIC3262_ASI3_BUS_FMT		MAKE_REG(0, 4, 33)
#define AIC3262_ASI3_LCH_OFFSET		MAKE_REG(0, 4, 34)
#define AIC3262_ASI3_ADC_INPUT_CNTL	MAKE_REG(0, 4, 39)
#define AIC3262_ASI3_DAC_OUT_CNTL	MAKE_REG(0, 4, 40)
#define AIC3262_ASI3_BWCLK_CNTL_REG	MAKE_REG(0, 4, 42)
#define AIC3262_ASI3_BCLK_N_CNTL	MAKE_REG(0, 4, 43)
#define AIC3262_ASI3_BCLK_N		MAKE_REG(0, 4, 44)
#define AIC3262_ASI3_WCLK_N		MAKE_REG(0, 4, 45)
#define AIC3262_ASI3_BWCLK_OUT_CNTL	MAKE_REG(0, 4, 46)
#define AIC3262_ASI3_DOUT_CNTL		MAKE_REG(0, 4, 47)
#define AIC3262_GPIO1_IO_CNTL		MAKE_REG(0, 4, 86)
#define AIC3262_GPIO_D6_D2		(0b01111100)
#define AIC3262_GPIO_D2_SHIFT		(2)
#define AIC3262_GPIO_D1_SHIFT		(1)
#define AIC3262_GPIO_D4_SHIFT		(4)
#define AIC3262_GPIO2_IO_CNTL		MAKE_REG(0, 4, 87)
#define AIC3262_GPI1_EN			MAKE_REG(0, 4, 91)
#define AIC3262_GPI1_D2_D1		(0b00000110)
#define AIC3262_GPI2_D5_D4		(0b00110000)
#define AIC3262_GPI2_EN			MAKE_REG(0, 4, 92)
#define AIC3262_GPO1_OUT_CNTL		MAKE_REG(0, 4, 96)
#define AIC3262_GPO1_D4_D1		(0b00011110)
#define AIC3262_DMIC_INPUT_CNTL		MAKE_REG(0, 4, 101)
#define AIC3262_DMIC_CONFIGURE_MASK	(0b00011111)
#define AIC3262_DMIC_CONFIGURE_SHIFT	(0)
#define AIC3262_DMIC_GPI1_LEFT_GPI1_RIGHT	(0)
#define AIC3262_DMIC_GPI2_LEFT_GPI2_RIGHT	(1)
#define AIC3262_DMIC_DIN1_LEFT_DIN1_RIGHT	(2)
#define AIC3262_DMIC_DIN2_LEFT_DIN2_RIGHT	(3)
#define AIC3262_DMIC_GPI01_LEFT_GPI01_RIGHT	(4)
#define AIC3262_DMIC_GPI02_LEFT_GPI02_RIGHT	(5)
#define AIC3262_DMIC_MCLK2_LEFT_MCLK2_RIGHT	(6)
#define AIC3262_DMIC_GPI1_LEFT_GPI2_RIGHT	(7)
#define AIC3262_DMIC_GPI1_LEFT_DIN1_RIGHT	(8)
#define AIC3262_DMIC_GPI1_LEFT_DIN2_RIGHT	(9)
#define AIC3262_DMIC_GPI1_LEFT_GPIO1_RIGHT	(10)
#define AIC3262_DMIC_GPI1_LEFT_GPIO2_RIGHT	(11)
#define AIC3262_DMIC_GPI1_LEFT_MCLK2_RIGHT	(12)
#define AIC3262_DMIC_GPI2_LEFT_DIN1_RIGHT	(13)
#define AIC3262_DMIC_GPI2_LEFT_DIN2_RIGHT	(14)
#define AIC3262_DMIC_GPI2_LEFT_GPIO1_RIGHT	(15)
#define AIC3262_DMIC_GPI2_LEFT_GPIO2_RIGHT	(16)
#define AIC3262_DMIC_GPI2_LEFT_MCLK2_RIGHT	(17)
#define AIC3262_DMIC_DIN1_LEFT_DIN2_RIGHT	(18)
#define AIC3262_DMIC_DIN1_LEFT_GPIO1_RIGHT	(19)
#define AIC3262_DMIC_DIN1_LEFT_GPIO2_RIGHT	(20)
#define AIC3262_DMIC_DIN1_LEFT_MCLK2_RIGHT	(21)
#define AIC3262_DMIC_DIN2_LEFT_GPIO1_RIGHT	(22)
#define AIC3262_DMIC_DIN2_LEFT_GPIO2_RIGHT	(23)
#define AIC3262_DMIC_DIN2_LEFT_MCLK2_RIGHT	(24)
#define AIC3262_DMIC_GPI01_LEFT_GPI02_RIGHT	(25)
#define AIC3262_DMIC_GPI01_LEFT_MCLK2_RIGHT	(26)
#define AIC3262_DMIC_GPI02_LEFT_MCLK2_RIGHT	(27)
#define AIC3262_MINIDSP_DATA_PORT_CNTL	MAKE_REG(0, 4, 118)

#define AIC3262_DAC_ASI_LR_UNMUTE_MASK	0x50
#define AIC3262_DAC_ASI_LR_UNMUTE	0x50
#define AIC3262_WCLK_BCLK_MASTER_MASK (0b00100110)
#define AIC3262_WCLK_MASTER_MASK (0b00100000)
#define AIC3262_BCLK_MASTER_MASK (0b00000100)
#define AIC3262_BCLK_OFFSET_MASK (0b11111111)
#define AIC3262_ASI_INTERFACE_MASK (0b11100000)
#define AIC3262_WCLK_OUT_MASK (0b00100000)
#define AIC3262_BCLK_OUT_MASK (0b00000100)
#define AIC3262_BCLK_INV_MASK (0b00000010)

#define AIC3262_ADC_ADAPTIVE_CRAM_REG    MAKE_REG(40, 0, 1)
#define AIC3262_DAC_ADAPTIVE_BANK1_REG   MAKE_REG(80, 0, 1)
#define AIC3262_DAC_ADAPTIVE_BANK2_REG   MAKE_REG(82, 0, 1)
#define AIC3262_ADC_DATAPATH_SETUP      MAKE_REG(0, 0, 81)
#define AIC3262_DAC_DATAPATH_SETUP      MAKE_REG(0, 0, 63)

#endif
