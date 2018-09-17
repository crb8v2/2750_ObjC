/*
 *  Connor Baniak
 *  cs2750 pa3
 *  3/18/2018
 *
 *  this files takes in an array and its size
 *  as parameters and returns a float
 *  of the sum
 *
 *  practice using .h files
 */

#include <stdio.h>

#include "sum.h"

float sum(float array[], int nums){

	float total = 0;
	int aa;

	for(aa=0; aa < nums; aa++){
		total += array[aa];
	}
	return total;
}
