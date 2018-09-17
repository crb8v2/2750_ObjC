#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]){
	
	pid_t childpid = 0;
	
	FILE * fp;

	fp = fopen("text.txt", "w");

	if( fork() == 0){
		printf("\n This is the child. \n");
		fprintf (fp, "pid: %ld ppid: %ld", getpid(), getppid());
	}
	
	fclose(fp);



	return 0;
}

