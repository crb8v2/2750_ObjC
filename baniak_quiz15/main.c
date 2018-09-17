#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main (int argc, char *argv[]){

	pid_t childpid;

	int shm_id;

	key_t theKey;
	theKey = 1234;
	int *holder;
	int passHolder;

	if(fork()== 0) {
		printf("This is the child\n");
		printf("Enter and integer: ");

		scanf("%d", &holder);

		printf("\nNumber entered was: %d\n", holder);

		shm_id = shmget(theKey, sizeof(int), IPC_CREAT | 0666 );
		
		holder = shmat(shm_id, NULL, 0);
		sleep(1);
	}

	wait(NULL);

	passHolder = shmget(theKey, sizeof(int *), 0666);
	
	printf("This is a pass from global var: %d\n", holder);

	printf("This is parent and the integer is %d\n", passHolder );

	return 0;
}
