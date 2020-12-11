// file: variousop.c
#include <stdio.h> 

int main(void)
{
	int i;
	int *pi = &i;		 //포인터 선언
	int **dpi = &pi;     //이중포인터 선언

	*pi = 5;
	*pi += 1; //*pi = *pi + 1와 같음
	printf("%d\n", i);

	// 후위 연산자 pi++는 전위 연산자보다 *pi보다 빠름
	printf("%d\n", (*pi)++); //*pi++ 는 *(pi++)으로 (*pi)++과 다름
	printf("%d\n", *pi);

	*pi = 10;
	printf("%d\n", ++ * pi); //++*pi과 ++(*pi)는 같음
	printf("%d\n", ++ * *dpi); //++**dpi과 ++(**dpi)는 같음
	printf("%d\n", i);

	return 0;
}
