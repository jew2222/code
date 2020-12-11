// file: neighborvar.c
#include <stdio.h> 

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("변수명  저장값  주소값   \n");
	printf("----------------------------------\n");
	printf("   a      %d     %p\n", a, &a);
	printf("   b      %d     %p\n", b, &b);
	printf("   c      %d     %p\n", c, &c);

	//window 10 에 맞춘 코딩
	int *p = &a;
	printf("   a      %d     %p\n", *p, p);
	printf("   b      %d     %p\n", *(p + 8), p+8); 
	printf("   c      %d     %p\n", *(p + 16), p+16); 

	return 0;
}
