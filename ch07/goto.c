// file: goto.c

#include <stdio.h> 

int main(void)
{
	int count = 1;

 loop : //이것을 라벨이라한다
	printf("%3d", count);
	if (++count <= 10)
		  goto loop; //라벨이 있는곳으로가서 실행

	printf("\n프로그램을 종료합니다.\n");

	return 0;
}
