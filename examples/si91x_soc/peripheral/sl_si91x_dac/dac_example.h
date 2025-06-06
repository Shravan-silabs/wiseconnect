/***************************************************************************/ /**
 * @file dac_example.h
 * @brief DAC example
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

#ifndef DAC_EXAMPLE_H_
#define DAC_EXAMPLE_H_

// -----------------------------------------------------------------------------
// Prototypes
/***************************************************************************/ /**
 * DAC example initialization function
 * DAC clock is configured for fifo mode of operation and followed by DAC
 * initialize, set configure, DAC write data and DAC start.
 *
 * @param none
 * @return none
 ******************************************************************************/
void dac_example_init(void);

/***************************************************************************/ /**
 * Function will run continuously
 * Based on DAC operation mode it will execute two different function and given
 * equivalent output of 10 bit DAC data
 *
 * @param none
 * @return none
 ******************************************************************************/
void dac_example_process_action(void);

#endif /* DAC_EXAMPLE_H_ */
