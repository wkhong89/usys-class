#include <stdio.h>
#include <string.h>

#define MAXLINE 100
void copy(char from[], char to[]);
char line[MAXLINE]; // 입력 줄
char longest[MAXLINE]; // 가장 긴 줄

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

void copy(char from[], char to[])
{
   int i;
   i = 0;
   while ((to[i] = from[i]) != '\0')
      ++i;
}
