#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>

void p_handler(int);
void c_handler(int);

int main(void)
{
    pid_t pid, ppid;

    pid = fork();
    if (pid == 0) {
        signal(SIGUSR1, c_handler);
        ppid = getppid();

        while (1) {
            sleep(1);
            kill(ppid, SIGUSR1);
            pause();
        }
    } else if (pid > 0) {
        signal(SIGUSR1, p_handler);

        while (1) {
            pause();
            sleep(1);
            kill(pid, SIGUSR1);
        }
    } else {
        perror("fork error!");
    }
}

void p_handler(int signo) 
{
    static int i = 1;
    printf("Parent Handler: call %d times.\n", i++);

}
void c_handler(int signo)
{
    static int i = 1;
    printf("Child Handler: call %d times.\n", i++);
}