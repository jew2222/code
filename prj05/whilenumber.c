// file: whilenumber.c

#include <stdio.h>
#define MAX 5

int main(void)
{
	int n = 1;

	while (n <= MAX)
		printf("%d\n", n++);

	printf("\n제어변수 count => %d\n", n);  // 제어변수n

	return 0;
}