/*******************************************************************************
* @file  diskio.c
* @brief 
*******************************************************************************
* # License
* <b>Copyright 2023 Silicon Laboratories Inc. www.silabs.com</b>
*******************************************************************************
*
* The licensor of this software is Silicon Laboratories Inc. Your use of this
* software is governed by the terms of Silicon Labs Master Software License
* Agreement (MSLA) available at
* www.silabs.com/about-us/legal/master-software-license-agreement. This
* software is distributed to you in Source Code format and is governed by the
* sections of the MSLA applicable to Source Code.
*
******************************************************************************/

/*-----------------------------------------------------------------------*/
/* Based on Low level disk I/O module skeleton for FatFs  (C)ChaN, 2016  */
/*-----------------------------------------------------------------------*/
#include "ffconf.h" /* FatFs configuration options */
#include "diskio.h" /* FatFs lower layer API */
#include "rsi_sdmem_disk.h"

/*-----------------------------------------------------------------------*/
/* Get Drive Status                                                      */
/*-----------------------------------------------------------------------*/

DSTATUS disk_status(BYTE pdrv /* Physical drive nmuber to identify the drive */
)
{
  DSTATUS res;

  switch (pdrv) {
    case DEV_RAM:
      return res;
    case DEV_USB:
      // translate the reslut code here
      return res;
    case DEV_SD:
      res = sdmem_disk_status(pdrv);
      return res;
  }
  return STA_NOINIT;
}

/*-----------------------------------------------------------------------*/
/* Inidialize a Drive                                                    */
/*-----------------------------------------------------------------------*/

DSTATUS disk_initialize(BYTE pdrv /* Physical drive nmuber to identify the drive */
)
{
  DSTATUS res;
  switch (pdrv) {
    case DEV_RAM:
      // translate the reslut code here

      return res;

    case DEV_USB:
      // translate the reslut code here

      return res;
    case DEV_SD:
      res = sdmem_disk_initialize(pdrv);

      // translate the reslut code here

      return res;
  }
  return STA_NOINIT;
}

/*-----------------------------------------------------------------------*/
/* Read Sector(s)                                                        */
/*-----------------------------------------------------------------------*/

DRESULT disk_read(BYTE pdrv,    /* Physical drive nmuber to identify the drive */
                  BYTE *buff,   /* Data buffer to store read data */
                  DWORD sector, /* Start sector in LBA */
                  UINT count    /* Number of sectors to read */
)
{
  DRESULT res;

  switch (pdrv) {
    case DEV_RAM:
      // translate the arguments here

      return res;

    case DEV_USB:
      // translate the reslut code here

      return res;
    case DEV_SD:
      // translate the reslut code here
      res = sdmem_disk_read(pdrv, buff, sector, count);
      return res;
  }

  return RES_PARERR;
}

/*-----------------------------------------------------------------------*/
/* Write Sector(s)                                                       */
/*-----------------------------------------------------------------------*/

DRESULT disk_write(BYTE pdrv,        /* Physical drive nmuber to identify the drive */
                   const BYTE *buff, /* Data to be written */
                   DWORD sector,     /* Start sector in LBA */
                   UINT count        /* Number of sectors to write */
)
{
  DRESULT res;

  switch (pdrv) {
    case DEV_RAM:
      // translate the reslut code here
      return res;

    case DEV_USB:
      // translate the reslut code here
      return res;
    case DEV_SD:
      // translate the reslut code here
      res = sdmem_disk_write(pdrv, buff, sector, count);
      return res;
  }

  return RES_PARERR;
}

/*-----------------------------------------------------------------------*/
/* Miscellaneous Functions                                               */
/*-----------------------------------------------------------------------*/

DRESULT disk_ioctl(BYTE pdrv, /* Physical drive nmuber (0..) */
                   BYTE cmd,  /* Control code */
                   void *buff /* Buffer to send/receive control data */
)
{
  DRESULT res;

  switch (pdrv) {
    case DEV_RAM:

      // Process of the command for the RAM drive

      return res;

    case DEV_SD:

      // Process of the command for the MMC/SD card
      res = sdmem_disk_ioctl(pdrv, cmd, buff);
      return res;

    case DEV_USB:

      // Process of the command the USB drive

      return res;
  }

  return RES_PARERR;
}
