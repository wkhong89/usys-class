#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
	int wstatus;

	pid = fork();
	if (pid > 0) {
		// parent process
		printf("I'm a parent(%d)\n", getpid());
		printf("waiting for child finished\n");
		wait(&wstatus);
		printf("just got normal finish message(%d) from child(%d)\n", wstatus, pid);
	} else if (pid == 0) {
		// child process
		printf("I'm a child(%d)\n", getpid());
		printf("I'm falling into sleep for 3 seconds\n");
		sleep(3);
		printf("just wake up and i'll finish my job\n");
	} else {
		perror("fork error");
	}

	return 0;
}
