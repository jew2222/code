// file: twoarysample.c
#include <stdio.h>

int main()
{
	int abc[4][3] = {
		{ 1, 2, 3 },
		{ 5, 6, 7 },
		{ 9, 10, 11 },
		{ 13, 14, 15 }
	};
	int rowsize = sizeof(abc) / sizeof(abc[0]);
	int colsize = sizeof(abc[0]) / sizeof(abc[0][0]);

	printf("각 행의 첫 주소 출력: \n");
	for (int i = 0; i < rowsize; i++)
		printf("%p ", abc[i]);
	printf("\n\n");

	printf("2행 원소의 주소와 값 출력: \n");
	int *p = abc[1];
	for (int i = 0; i < colsize; i++)
	{
		printf("%p ", p);
		printf("%llu ", p);
		printf("%d\n", *p++);
		//수업영상 참고하여 수정한 부분입니다
		
	}

	return 0;
}