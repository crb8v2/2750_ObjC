/*
 * Connor Baniak - 2018
 *
 * Main.c creates an array of defined 10 size of random floats
 *
 * Calls four seperate functions, practices using .c, .h, and makefiles
 *
 */


#include <stdio.h>
#include <stdlib.h>

#include "avg.h"
#include "sum.h"
#include "max.h"
#include "min.h"

#define N 10

int main(){
	int i;
	float a[N];
	srand(123);

	/* creates array of random numbers*/
	for (i = 0; i < N; i++) {
		a[i] = ((double) rand())/ RAND_MAX;
		printf("%.2f ",a[i]);
	}

	/*calls all four seperate functions and
	displays two decimal places*/
	printf("\n\n\a\a\a");
	printf("average: %.2f\n",avg(a,N));
	printf("sum: %.2f\n",sum(a,N));
	printf("max: %.2f\n",max(a,N));
	printf("min: %.2f\n",min(a,N));
	return 0;
}

