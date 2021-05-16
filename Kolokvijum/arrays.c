/*
 * arrays.c
 *
 *  Created on: May 16, 2021
 *      Author: Stefan Cirkovic
 */
#include "arrays.h"
#include "math.h"

void Sum(int16_t first_element, int16_t ratio, int16_t n, int8_t mode)
{
	int8_t i;
	int16_t sum = 0;
	switch(mode)
	{

	case Iterative:
		for(i = 0; i < n; i++)
		{
			sum += i;
		}
		break;
	case Formula:
		if(ratio < 1)
		{
			sum = (ratio * pow(first_element, 2) - 1) / (first_element - 1);
		}
		else
		{
			sum = (ratio * (1 - pow(first_element, 2))) / (1 - first_element);
		}
		break;



	}

}
