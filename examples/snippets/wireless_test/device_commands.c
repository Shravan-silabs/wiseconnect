/*******************************************************************************
* @file  device_commands.c
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

#include "em_device.h"
#include "sl_status.h"

sl_status_t wifi_reset_command_handler()
{
  NVIC_SystemReset();
  while (1)
    ;

  return SL_STATUS_OK;
}
