// file: basicpointer.c
#include <stdio.h>

int main(void)
{
	char c = '@';
	char* pc = &c;
	int m = 100;
	int* pm = &m;
	double x = 5.83;
	double* px = &x;

	printf("변수명    주소값            저장값\n");
	printf("--------------------------------------\n");
	printf("%3s    %p   %9c\n", "c", pc, c);
	printf("%3s    %p   %9d\n", "m", pm, m);
	printf("%3s    %p   %9f\n", "x", px, x);
	//수업시에 자릿수 12를 빼라고 하셔서 생략했습니다

	return 0;
}
