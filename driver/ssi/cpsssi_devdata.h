/*** cps_common_devdata.h ******************************/

/* CPS-SSI-4P */
#define	OFFSET_EXT_COMMAND_LOWER_CPS_SSI 0x20
#define	OFFSET_EXT_COMMAND_UPPER_CPS_SSI 0x22
#define	OFFSET_EXT_DATA_LOWER_CPS_SSI 0x24
#define	OFFSET_EXT_DATA_UPPER_CPS_SSI 0x26
#define	OFFSET_INPUT_STATUS_CPS_SSI 0x22
#define	OFFSET_CHECK_SETTING_DATA_LOWER_CPS_SSI 0x24
#define	OFFSET_CHECK_SETTING_DATA_UPPER_CPS_SSI 0x26
/*************************************************************************************************************/
/* CPS-SSI Command */
//#define CPS_SSI_COMMAND_BASE_ECU		0x0000
//#define CPS_SSI_COMMAND_BASE_AI			0x1000
//#define CPS_SSI_COMMAND_BASE_AO			0x2000
//#define CPS_SSI_COMMAND_BASE_DI			0x3000
//#define CPS_SSI_COMMAND_BASE_DO			0x4000
//#define CPS_SSI_COMMAND_BASE_CNT		0x5000
//#define CPS_SSI_COMMAND_BASE_MEM		0x6000
#define CPS_SSI_COMMAND_BASE_SSI	0x8000

#define CPS_SSI_COMMAND_MASK	0xF000
/* CPS-SSI Command Read or Write */
#define CPS_SSI_COMMAND_CALL 0x00
#define CPS_SSI_COMMAND_READ	0x01
#define CPS_SSI_COMMAND_WRITE 0x02

/* CPS-SSI-4P Command Read or Write */
#define CPS_SSI_4P_COMMAND_READ	0x01
#define CPS_SSI_4P_COMMAND_WRITE 0x02

/* CPS-SSI Common Command */
#define CPS_SSI_COMMAND_SSI_INIT ( CPS_SSI_COMMAND_BASE_SSI | 0x00 )
#define CPS_SSI_COMMAND_SSI_SET_ADDRESS	( CPS_SSI_COMMAND_BASE_SSI | 0x16 )
#define CPS_SSI_COMMAND_SSI_SET_DATA	( CPS_SSI_COMMAND_BASE_SSI | 0x17 )
#define CPS_SSI_COMMAND_SSI_SET_READ_OR_WRITE	( CPS_SSI_COMMAND_BASE_SSI | 0x18 )

/*************************************************************************************************************/
/* CPS-SSI SSI SET ADDRESS VALUE (SET_ADDR_COMMAND) */
#define CPS_SSI_SSI_SET_ADDR_COMMAND_STATUS	0x0000

#define CPS_SSI_SSI_SET_ADDR_COMMAND_START_CHANNEL0	0x85
#define CPS_SSI_SSI_SET_ADDR_COMMAND_START_CHANNEL1	0x88
#define CPS_SSI_SSI_SET_ADDR_COMMAND_START_CHANNEL2	0x8C
#define CPS_SSI_SSI_SET_ADDR_COMMAND_START_CHANNEL3	0x8F

#define CPS_SSI_SSI_SET_ADDR_COMMAND_TEMPERATURE( x, y )	( x + y )

#define CPS_SSI_SSI_SET_ADDR_COMMAND_TEMP_CHANNEL0	0x20
#define CPS_SSI_SSI_SET_ADDR_COMMAND_TEMP_CHANNEL1	0x2C
#define CPS_SSI_SSI_SET_ADDR_COMMAND_TEMP_CHANNEL2	0x3C
#define CPS_SSI_SSI_SET_ADDR_COMMAND_TEMP_CHANNEL3	0x48

#define CPS_SSI_SSI_SET_ADDR_COMMAND_GLOBAL_CONSTITUTION	0x00F0
#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL_BIT_MASK( x )	( 0x00F4 + x )
#define CPS_SSI_SSI_SET_ADDR_COMMAND_GLOBAL_STATUS	0x00F8
#define CPS_SSI_SSI_SET_ADDR_COMMAND_MUX_CONSTITUTION_DELAY( x )	( 0x00F9 + x )
#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL_DATA( x, y )	( 0x0200 + y + x )
#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL_SENSE_RESISTANCE( x ) \
	 CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL_DATA( x, 0x08 )

#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL0_DATA_ADDRESS	0x10
#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL1_DATA_ADDRESS	0x1C
#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL2_DATA_ADDRESS	0x2C
#define CPS_SSI_SSI_SET_ADDR_COMMAND_CHANNEL3_DATA_ADDRESS	0x38



#define CPS_SSI_SSI_SET_ADDR_COMMAND_CUSTOM_SENSOR_TEBLE_DATA( x, y )	( 0x0250 + y + x )

/* CPS-SSI SSI SET READ OR WRITE VALUES (SET_RW) */
#define CPS_SSI_SSI_SET_RW_WRITE	0x0002	/* WRITE */
#define CPS_SSI_SSI_SET_RW_READ	0x0003	/* READ */

/**************************************************/
