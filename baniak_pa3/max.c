/*
 * Connor Baniak
 * cs2750 pa3
 * 3/18/2018
 *
 * File takes in array and size of array
 * Find the max values and returns a float
 *
 * practice using .h files
 *
 */


#include <stdio.h>

#include "max.h"

float max(float array[], int nums){
	float maxNum = 0;
	int aa;

	for(aa=0; aa < nums; aa++){
		if(array[aa] > maxNum){
		maxNum = array[aa];
		}
	}
	return maxNum;
}
