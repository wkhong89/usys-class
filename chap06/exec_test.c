#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char *args[] = {"ls", "-F", NULL};

  if (argc != 2) {
    printf("[Usage] exec_test [1 | 2] if 1, do execl, otherwise do execv\n");
    exit(0);
  }

  // 1. execl
  if (!strcmp(argv[1], "1")) {
    printf("execl()의 실행 결과");
    execl("/bin/ls", "ls", "-a", NULL);
  }  
  // 2. execv
  else {
    execv("/bin/ls", args);
    printf("execv()의 실행 결과");
  }

  return 0;
}