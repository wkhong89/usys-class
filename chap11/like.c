#include <stdio.h>

int main(void)
{
#ifdef DEBUG
	printf("Debug message: I like you!\n");
#endif	//DEBUG
	return 0;
}
