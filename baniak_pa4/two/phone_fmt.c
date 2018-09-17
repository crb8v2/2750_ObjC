/*
 * Connor Baniak
 * cs2750 pa_4
 * 4/1/18
 *
 * Function that properly formats the phone number and prints.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "phone_fmt.h"

void phone_fmt(char tenDigits[]){
	/* hardcode formatting */
	char fmtNums[14] = { '(', tenDigits[0], tenDigits[1], tenDigits[2],
	')', ' ', tenDigits[3], tenDigits[4], tenDigits[5], '-', tenDigits[6],
	tenDigits[7], tenDigits[8], tenDigits[9]};
	
	printf("\nPassed ten digits: %s\n\n", fmtNums);
	
	return;
}
