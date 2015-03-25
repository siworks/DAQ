/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>
#include "delay.h"
#include "parser.h"
#include "DAC.h"
#include "ADC_core.h"


uint16_t angle;

int main (void)
{
	// Insert system clock initialization code here (sysclk_init()).
	

	board_init();
	sysclk_init();
	
	/*
	ADC_init();
	timer_init();
	pio_set_output(PIOA, PIO_PA17, LOW, DISABLE, DISABLE);
	*/
	udc_start();
	
	
	while(1)
	{
		parse_comands();
		delay_ms(10);
	}
	// Insert application code here, after the board has been initialized.
}