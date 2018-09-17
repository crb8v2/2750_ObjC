/*
 * Connor Baniak
 * cs270 pa3
 * 3/18/2018
 *
 * Programs finds the average of an array.
 * Parameters are array from main and size of array
 * 
 * Header file attached
 *
 * return average float
 */


#include <stdio.h>

#include "avg.h"

float avg(float array[], int nums){
	
	float total = 0;
	float average = 0;
	int aa;

	for(aa=0; aa < nums; aa++){
		total += array[aa];
	}
	
	average = total/nums;
	
	return average;
}
