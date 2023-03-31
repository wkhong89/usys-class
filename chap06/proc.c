#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char** argv)
{
    pid_t pid = fork();
    int wstatus;
    char ch;
    
    // Child, PID is 0, STEP 5
    if (pid == 0) {
        // exec functions are called to start a executable programme.
        printf("child process: PID = %d\n", getpid());
	while ((ch=getchar()) != 'q') {
		for (int i = 0; i < 1000000; i++);
	}
    } 
    // Parent, PID > 0, STEP 4
    // Parent continues
    else {
	printf("parent process: PID = %d\n", getpid());
	wait(&wstatus);
	printf("got message(%d) from child\n", wstatus);
    }
    return 0;
}
