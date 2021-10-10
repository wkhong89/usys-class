#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler_tstp(int signum);

int main(void)
{
        //signal(SIGTSTP, handler_tstp);
        //signal(SIGTSTP, SIG_IGN);
	struct sigaction sa;
	sa.sa_handler = handler_tstp;
	sa.sa_flags = SA_RESTART;

	sigaction(SIGTSTP, &sa, NULL);


	for (int i = 1; ;i++) {
		sleep(1);
		printf("%d초 경과\n", i);
	}

	return 0;
}

void handler_tstp(int signum)
{
	printf("%d received...\n", signum);
}
