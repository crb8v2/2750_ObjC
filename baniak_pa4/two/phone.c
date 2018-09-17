/*
 * Connor Baniak
 * cs2750 pa_4
 * 4/1/18
 *
 * This program asks user for a phone number to be entered,
 * in a semireasonable fashion.
 *
 * Outputs file in proper (xxx) xxx-xxxx format
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 200

void phone_fmt(char tenDigits[]);

int main(){
	int aa = 0;
	char inputNum[MAX];
	char tenDigits[10];
	int tenIncs = 0;
		
	printf("Please enter a 10 digit phone number, ");
	printf("using a semi-reasonable format.\n");
	printf("==>:"); 
	
	/* fgets accepts spaces*/
	fgets(inputNum, MAX, stdin);
	
	/*Looks through the entire user input
	 * and takes the first 10 digits*/
	for(; aa <= MAX; aa++){
		if(isdigit(inputNum[aa]) && tenIncs < 10){
			tenDigits[tenIncs] = inputNum[aa];
			tenIncs++;
		}

	}
	
	/* check for min of 10 numbers */
	if(strlen(tenDigits) < 10){
		printf("\nString must include 10 digits.\n\n");
		exit(0);
	}

	/* call for external function */
	phone_fmt(tenDigits);
	return 0;
}
