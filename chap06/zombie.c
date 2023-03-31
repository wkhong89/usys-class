#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid > 0) {
		// parent process
		printf("I'm a parent(%d)\n", getpid());
		sleep(10000);
	} else if (pid == 0) {
		// child process will be a zombie
		printf("I'm a child(%d)\n", getpid());
		sleep(1);
	} else {
		perror("fork error");
	}

	return 0;
}
