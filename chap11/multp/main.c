#include <stdio.h>
#include <string.h>
#include "copy.h"

char line[MAXLINE];
char longest[MAXLINE];

/*입력 줄 가운데 가장 긴 줄 프린트 */
int main()
{
   int len;
   int max;
   max = 0;
   while (gets(line) != NULL) {
   //while (fgets(line, MAXLINE, stdin) != NULL) {
      len = strlen(line);
      if (len > max) {
         max = len;
         copy(line, longest);
      }
   }
   if (max > 0)
      printf("%s", longest);

   return 0;
}
