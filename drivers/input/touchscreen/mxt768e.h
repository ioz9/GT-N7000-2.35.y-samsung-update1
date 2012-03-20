/* drivers/input/touchscreen/qt602240.h
 *
 * MXT768E TSP driver.
 *
 * Copyright (C) 2009 Samsung Electronics Co. Ltd.
 *
 */


/*
 *  option for updating (cte options to) the flash, if config error comes...!!!
 *  used to update the line sizes and only in 7" LCD p1-p2 boards
 *  Enable this and load the zImage once. Then switch off the device 
 *  then disable this option and recompile for the normal operation. 
 */

#define QT_FIRMUP_ENABLE

unsigned char MXT768_firmware[] = {0x00};

#define I2C_SPEED                   800000u

#define CONNECT_OK                  1u
#define CONNECT_ERROR               2u

#define READ_MEM_OK                 1u
#define READ_MEM_FAILED             2u

#define MESSAGE_READ_OK             1u
#define MESSAGE_READ_FAILED         2u

#define WRITE_MEM_OK                1u
#define WRITE_MEM_FAILED            2u

#define CFG_WRITE_OK                1u
#define CFG_WRITE_FAILED            2u

#define I2C_INIT_OK                 1u
#define I2C_INIT_FAIL               2u

#define CRC_CALCULATION_OK          1u
#define CRC_CALCULATION_FAILED      2u

#define ID_MAPPING_OK               1u
#define ID_MAPPING_FAILED           2u

#define ID_DATA_OK                  1u
#define ID_DATA_NOT_AVAILABLE       2u

#define QT_WAITING_BOOTLOAD_COMMAND 0xC0
#define QT_WAITING_FRAME_DATA       0x80
#define QT_FRAME_CRC_CHECK          0x02
#define QT_FRAME_CRC_PASS           0x04
#define QT_FRAME_CRC_FAIL           0x03

#define I2C_APPL_ADDR_0         0x4c
#define I2C_BOOT_ADDR_0         0x26

uint8_t QT_i2c_address;

/* Module information */
MODULE_DESCRIPTION("AT42QT602240 Touchscreen driver");
MODULE_LICENSE("GPL");
