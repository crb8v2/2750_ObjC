/*
 * Connor Bnaiak
 * cs2750 pa3
 * 3/19/2018
 *
 * this is main
 * creates an array of random floats and calls four external funtions
 *
 * pracitce with .c, .h, and make files
 */

#include <stdio.h>
#include <math.h>

int main() {
	int nn = 100001;
	int sieve[nn];
	int pp, ii, jj;
	int square;
	square = sqrt(nn);
	
	//creates an array of nn size with the numbers 0 => nn
	for(pp=0; pp <= nn; pp++){
		sieve[pp] = pp;
	}
	
	// for loops check through entire array step by step
	// determining if the array == 0 or not
	for(jj=2; jj <= square; jj++){
		if( sieve[jj] == jj){
			// checks for every next value of jj, make jj*2 == 0
			// then increment ii by that value
			for(ii= jj*2; ii <= nn; ii += sieve[jj]){
				sieve[ii] = 0;
			}
		}
	}
	
	//prints the array values that are not 0, starting at 2
	for(pp=2; pp <= nn; pp++){
		if(sieve[pp] != 0){
	 		printf("%d \n", sieve[pp]);
		}
	}

	return 0;
}
