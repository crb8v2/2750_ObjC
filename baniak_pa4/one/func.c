/* Connor Baniak
// cs2750 pa_4
// 4/1/18
//
// This functions passes in the command line arguments and
 checks if they are a substring of another. */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "func.h"


void func(int argc, char *argv[], int aa){
	
	int bb;
	/* takes in strings that were alreadu checked for and does a check if */
	/* element is a substring of anything in the future. */
	for(bb = 1; bb < argc; bb++){
		if(strstr(argv[bb],argv[aa]) != NULL && argv[aa] != argv[bb]){
			printf("%s is a substring of %s\n", argv[aa], argv[bb]);
		}
	}
	
	return;
}
