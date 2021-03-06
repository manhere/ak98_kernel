/* linux/arch/arm/mach-ak880x/include/mach/irqs.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_IRQS_H
#define __ASM_ARCH_IRQS_H __FILE__

#define AK88_IRQ(x)		(x)

/* Main cpu interrupts */
#define	IRQ_AK_RESERVED0	AK88_IRQ(0)	/* No 0 reserved */
#define	IRQ_DISPLAY_CTRL	AK88_IRQ(1)
#define	IRQ_CAMERA_IF		AK88_IRQ(2)
#define	IRQ_MOTIONESTIMATION	AK88_IRQ(3)

#define	IRQ_IMG_MPEG4		AK88_IRQ(4)
#define	IRQ_AUDIO		AK88_IRQ(5)
#define	IRQ_H264_DECODER	AK88_IRQ(6)
#define	IRQ_AK_RESERVED1	AK88_IRQ(7)	/* No 7 reserved */

#define	IRQ_DAC			AK88_IRQ(8)
#define	IRQ_AK_RESERVED2	AK88_IRQ(9)	/* No 9 reserved */
#define	IRQ_L2MEM		AK88_IRQ(10)
#define	IRQ_NF_ECC		AK88_IRQ(11)

#define	IRQ_NF_CTRL		AK88_IRQ(12)
#define	IRQ_UART3		AK88_IRQ(13)
#define	IRQ_UART2		AK88_IRQ(14)
#define	IRQ_UART1		AK88_IRQ(15)

#define	IRQ_UART0		AK88_IRQ(16)
#define	IRQ_SPI2		AK88_IRQ(17)
#define	IRQ_SPI1		AK88_IRQ(18)
#define	IRQ_AK_RESERVED3	AK88_IRQ(19)	/* No 19 reserved */

#define	IRQ_2D_ACC		AK88_IRQ(20)
#define	IRQ_SDIO		AK88_IRQ(21)
#define	IRQ_MMC_SD		AK88_IRQ(22)
#define	IRQ_USBHOST_MCU		AK88_IRQ(23)

#define	IRQ_USBHOST_DMA		AK88_IRQ(24)
#define	IRQ_USBOTG_MCU		AK88_IRQ(25)
#define	IRQ_USBOTG_DMA		AK88_IRQ(26)
#define	IRQ_SYSCTRL		AK88_IRQ(27)

/* System control sub irqs */

#define	AK88_SYSCTRL_IRQ(x)	((x) + IRQ_SYSCTRL + 1)

#define	IRQ_TOUCHPANEL		AK88_SYSCTRL_IRQ(0)
#define	IRQ_TIMER5		AK88_SYSCTRL_IRQ(1)
#define	IRQ_TIMER4		AK88_SYSCTRL_IRQ(2)
#define	IRQ_TIMER3		AK88_SYSCTRL_IRQ(3)

#define	IRQ_TIMER2		AK88_SYSCTRL_IRQ(4)
#define	IRQ_TIMER1		AK88_SYSCTRL_IRQ(5)
#define	IRQ_CLK_ADJUST		AK88_SYSCTRL_IRQ(6)
#define	IRQ_WGPIO		AK88_SYSCTRL_IRQ(7)

#define	IRQ_RTC_RDY		AK88_SYSCTRL_IRQ(8)
#define	IRQ_RTC_ALARM		AK88_SYSCTRL_IRQ(9)
#define	IRQ_GPIO		AK88_SYSCTRL_IRQ(10)

/* 
 * GPIO interrupts
 */

#define AK88_GPIO_IRQ(x)	((x) + IRQ_GPIO + 1)

#define IRQ_GPIO_0		AK88_GPIO_IRQ(0)
#define IRQ_GPIO_1		AK88_GPIO_IRQ(1)
#define IRQ_GPIO_2		AK88_GPIO_IRQ(2)
#define IRQ_GPIO_3		AK88_GPIO_IRQ(3)
#define IRQ_GPIO_4		AK88_GPIO_IRQ(4)
#define IRQ_GPIO_5		AK88_GPIO_IRQ(5)
#define IRQ_GPIO_6		AK88_GPIO_IRQ(6)
#define IRQ_GPIO_7		AK88_GPIO_IRQ(7)
#define IRQ_GPIO_8		AK88_GPIO_IRQ(8)
#define IRQ_GPIO_9		AK88_GPIO_IRQ(9)
#define IRQ_GPIO_10		AK88_GPIO_IRQ(10)
#define IRQ_GPIO_11		AK88_GPIO_IRQ(11)
#define IRQ_GPIO_12		AK88_GPIO_IRQ(12)
#define IRQ_GPIO_13		AK88_GPIO_IRQ(13)
#define IRQ_GPIO_14		AK88_GPIO_IRQ(14)
#define IRQ_GPIO_15		AK88_GPIO_IRQ(15)
#define IRQ_GPIO_16		AK88_GPIO_IRQ(16)
#define IRQ_GPIO_17		AK88_GPIO_IRQ(17)
#define IRQ_GPIO_18		AK88_GPIO_IRQ(18)
#define IRQ_GPIO_19		AK88_GPIO_IRQ(19)
#define IRQ_GPIO_20		AK88_GPIO_IRQ(20)
#define IRQ_GPIO_21		AK88_GPIO_IRQ(21)
#define IRQ_GPIO_22		AK88_GPIO_IRQ(22)
#define IRQ_GPIO_23		AK88_GPIO_IRQ(23)
#define IRQ_GPIO_24		AK88_GPIO_IRQ(24)
#define IRQ_GPIO_25		AK88_GPIO_IRQ(25)
#define IRQ_GPIO_26		AK88_GPIO_IRQ(26)
#define IRQ_GPIO_27		AK88_GPIO_IRQ(27)
#define IRQ_GPIO_28		AK88_GPIO_IRQ(28)
#define IRQ_GPIO_29		AK88_GPIO_IRQ(29)
#define IRQ_GPIO_30		AK88_GPIO_IRQ(30)
#define IRQ_GPIO_31		AK88_GPIO_IRQ(31)
#define IRQ_GPIO_32		AK88_GPIO_IRQ(32)
#define IRQ_GPIO_33		AK88_GPIO_IRQ(33)
#define IRQ_GPIO_34		AK88_GPIO_IRQ(34)
#define IRQ_GPIO_35		AK88_GPIO_IRQ(35)
#define IRQ_GPIO_36		AK88_GPIO_IRQ(36)
#define IRQ_GPIO_37		AK88_GPIO_IRQ(37)
#define IRQ_GPIO_38		AK88_GPIO_IRQ(38)
#define IRQ_GPIO_39		AK88_GPIO_IRQ(39)
#define IRQ_GPIO_40		AK88_GPIO_IRQ(40)
#define IRQ_GPIO_41		AK88_GPIO_IRQ(41)
#define IRQ_GPIO_42		AK88_GPIO_IRQ(42)
#define IRQ_GPIO_43		AK88_GPIO_IRQ(43)
#define IRQ_GPIO_44		AK88_GPIO_IRQ(44)
#define IRQ_GPIO_45		AK88_GPIO_IRQ(45)
#define IRQ_GPIO_46		AK88_GPIO_IRQ(46)
#define IRQ_GPIO_47		AK88_GPIO_IRQ(47)
#define IRQ_GPIO_48		AK88_GPIO_IRQ(48)
#define IRQ_GPIO_49		AK88_GPIO_IRQ(49)
#define IRQ_GPIO_50		AK88_GPIO_IRQ(50)
#define IRQ_GPIO_51		AK88_GPIO_IRQ(51)
#define IRQ_GPIO_52		AK88_GPIO_IRQ(52)
#define IRQ_GPIO_53		AK88_GPIO_IRQ(53)
#define IRQ_GPIO_54		AK88_GPIO_IRQ(54)
#define IRQ_GPIO_55		AK88_GPIO_IRQ(55)
#define IRQ_GPIO_56		AK88_GPIO_IRQ(56)
#define IRQ_GPIO_57		AK88_GPIO_IRQ(57)
#define IRQ_GPIO_58		AK88_GPIO_IRQ(58)
#define IRQ_GPIO_59_RESERVED	AK88_GPIO_IRQ(59)	/* reserved */
#define IRQ_GPIO_60_RESERVED	AK88_GPIO_IRQ(60)	/* reserved */
#define IRQ_GPIO_61		AK88_GPIO_IRQ(61)
#define IRQ_GPIO_62		AK88_GPIO_IRQ(62)
#define IRQ_GPIO_63		AK88_GPIO_IRQ(63)
#define IRQ_GPIO_64		AK88_GPIO_IRQ(64)
#define IRQ_GPIO_65		AK88_GPIO_IRQ(65)
#define IRQ_GPIO_66		AK88_GPIO_IRQ(66)
#define IRQ_GPIO_67		AK88_GPIO_IRQ(67)
#define IRQ_GPIO_68		AK88_GPIO_IRQ(68)
#define IRQ_GPIO_69		AK88_GPIO_IRQ(69)
#define IRQ_GPIO_70		AK88_GPIO_IRQ(70)
#define IRQ_GPIO_71		AK88_GPIO_IRQ(71)
#define IRQ_GPIO_72		AK88_GPIO_IRQ(72)
#define IRQ_GPIO_73		AK88_GPIO_IRQ(73)
#define IRQ_GPIO_74		AK88_GPIO_IRQ(74)
#define IRQ_GPIO_75		AK88_GPIO_IRQ(75)
#define IRQ_GPIO_76		AK88_GPIO_IRQ(76)
#define IRQ_GPIO_77		AK88_GPIO_IRQ(77)
#define IRQ_GPIO_78		AK88_GPIO_IRQ(78)
#define IRQ_GPIO_79		AK88_GPIO_IRQ(79)
#define IRQ_GPIO_80		AK88_GPIO_IRQ(80)
#define IRQ_GPIO_81		AK88_GPIO_IRQ(81)
#define IRQ_GPIO_82		AK88_GPIO_IRQ(82)
#define IRQ_GPIO_83		AK88_GPIO_IRQ(83)

/* DGPIO */
#define IRQ_DGPIO_19		AK88_GPIO_IRQ(84)
#define IRQ_DGPIO_20		AK88_GPIO_IRQ(85)
#define IRQ_DGPIO_21		AK88_GPIO_IRQ(86)
#define IRQ_DGPIO_22		AK88_GPIO_IRQ(87)
#define IRQ_DGPIO_23		AK88_GPIO_IRQ(88)
#define IRQ_DGPIO_24		AK88_GPIO_IRQ(89)
#define IRQ_DGPIO_25		AK88_GPIO_IRQ(90)
#define IRQ_DGPIO_26		AK88_GPIO_IRQ(91)
#define IRQ_DGPIO_27		AK88_GPIO_IRQ(92)
#define IRQ_DGPIO_28		AK88_GPIO_IRQ(93)
#define IRQ_DGPIO_29		AK88_GPIO_IRQ(94)
#define IRQ_DGPIO_30		AK88_GPIO_IRQ(95)
#define IRQ_DGPIO_31		AK88_GPIO_IRQ(96)
#define IRQ_DGPIO_32		AK88_GPIO_IRQ(97)
#define IRQ_DGPIO_33		AK88_GPIO_IRQ(98)
#define IRQ_DGPIO_34		AK88_GPIO_IRQ(99)
#define IRQ_DGPIO_35		AK88_GPIO_IRQ(100)
#define IRQ_DGPIO_36		AK88_GPIO_IRQ(101)
#define IRQ_DGPIO_0		AK88_GPIO_IRQ(102)
#define IRQ_DGPIO_1		AK88_GPIO_IRQ(103)
#define IRQ_DGPIO_2		AK88_GPIO_IRQ(104)
#define IRQ_DGPIO_3		AK88_GPIO_IRQ(105)
#define IRQ_DGPIO_4		AK88_GPIO_IRQ(106)
#define IRQ_DGPIO_5		AK88_GPIO_IRQ(107)
#define IRQ_DGPIO_6		AK88_GPIO_IRQ(108)
#define IRQ_DGPIO_7		AK88_GPIO_IRQ(109)
#define IRQ_DGPIO_8		AK88_GPIO_IRQ(110)
#define IRQ_DGPIO_9		AK88_GPIO_IRQ(111)
#define IRQ_DGPIO_10		AK88_GPIO_IRQ(112)
#define IRQ_DGPIO_11		AK88_GPIO_IRQ(113)
#define IRQ_DGPIO_12		AK88_GPIO_IRQ(114)
#define IRQ_DGPIO_13		AK88_GPIO_IRQ(115)
#define IRQ_DGPIO_14		AK88_GPIO_IRQ(116)

#define AK88_L2MEM_IRQ(x)	((x) + IRQ_DGPIO_14 + 1)

#define IRQ_L2_FRAC_DMA		AK88_L2MEM_IRQ(0)
#define IRQ_L2_UART0_TX_DMA	AK88_L2MEM_IRQ(1)
#define IRQ_L2_UART0_RX_DMA	AK88_L2MEM_IRQ(2)
#define IRQ_L2_UART1_TX_DMA	AK88_L2MEM_IRQ(3)
#define IRQ_L2_UART1_RX_DMA	AK88_L2MEM_IRQ(4)
#define IRQ_L2_UART2_TX_DMA	AK88_L2MEM_IRQ(5)
#define IRQ_L2_UART2_RX_DMA	AK88_L2MEM_IRQ(6)
#define IRQ_L2_UART3_TX_DMA	AK88_L2MEM_IRQ(7)
#define IRQ_L2_UART3_RX_DMA	AK88_L2MEM_IRQ(8)
#define IRQ_L2_BUF0_DMA		AK88_L2MEM_IRQ(9)
#define IRQ_L2_BUF1_DMA		AK88_L2MEM_IRQ(10)
#define IRQ_L2_BUF2_DMA		AK88_L2MEM_IRQ(11)
#define IRQ_L2_BUF3_DMA		AK88_L2MEM_IRQ(12)
#define IRQ_L2_BUF4_DMA		AK88_L2MEM_IRQ(13)
#define IRQ_L2_BUF5_DMA		AK88_L2MEM_IRQ(14)
#define IRQ_L2_BUF6_DMA		AK88_L2MEM_IRQ(15)
#define IRQ_L2_BUF7_DMA		AK88_L2MEM_IRQ(16)
#define IRQ_L2_LDMA_VLD		AK88_L2MEM_IRQ(17)
#define IRQ_L2_CRC_VLD		AK88_L2MEM_IRQ(18)

#define AK88_LAST_IRQ	IRQ_L2_CRC_VLD

#define NR_IRQS			(AK88_LAST_IRQ + 1)

#endif				/* __ASM_ARCH_IRQ_H */
