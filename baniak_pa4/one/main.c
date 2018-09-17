/*
// Connor Baniak
// cs2750 pa_4
// 4/1/18
//
// Input of strings and numbers are passed to the command line. Numbers are added,
// and strings check if they are a substring of any element that follows.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "func.h"

int main( int argc, char *argv[]){
	int aa;
	int numTotal = 0;
	int convertInt = 0;
	

	for (aa = 1; aa < argc; aa++){
		
		/* string to integer, returns 0 if not an integer */
		convertInt = atoi(argv[aa]);
		
		/* checks if num and adds */
		if(convertInt != 0){
			numTotal += convertInt;
		} else {	/* passes value to func, which checks for substrings */
			func(argc, argv, aa);
			}

	}

	printf("Total integers: %i\n", numTotal);	
	return 0;
}
