#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	fork();
	printf("my ID: %d\n", getpid());

	return 0;
}