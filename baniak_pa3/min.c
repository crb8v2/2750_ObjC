/*
 * Connor Baniak
 * cs2750 pa3
 * 3/18/2018
 *
 *  This files takes in an array and the size
 *  returns a float of the min value
 *
 *  practice using .h files
 */

#include <stdio.h>

#include "min.h"

float min(float array[], int nums){

	float minNum = array[0];
	int aa;

	for(aa=1; aa < nums; aa++){
		if(array[aa] < minNum){
			minNum = array[aa];
		}
	}


	return minNum;
}
