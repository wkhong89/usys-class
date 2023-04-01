#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void alarm_handler(int);
int alarm_flag = 0;

int main(void)
{
    signal(SIGALRM, alarm_handler);

    alarm(5);
    pause();
    if (alarm_flag)
        printf("Passed a 5 Secs.\n");
}


void alarm_handler(int)
{
    printf("Received an alarm signal.\n");
    alarm_flag = 1;
}