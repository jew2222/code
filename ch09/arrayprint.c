// file: arrayprint.c
#include <stdio.h>

int main()
{
	int a[3][4] = {
		{ 1, 2, 7, 3 },   /*  initializers for row indexed by 0 */
		{ 5, 6, 3, 4 },   /*  initializers for row indexed by 1 */
		{ 9, 7, 1, 8 }     /*  initializers for row indexed by 2 */
	};

	printf("%5s %8s %3s     ", "원소", "주소", "        값");
	printf("%5s %8s %3s     ", "원소", "주소", "        값");
	printf("%5s %8s %3s      ", "원소" "주소", "        값");
	printf("%5s %8s %3s\n", "원소", "주소", "       값");
	printf("-------------------------------------");
	printf("-------------------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("a[%d][%d] %llu %d  ", i, j, &a[i][j], a[i][j]);
		puts("");
	}

	return 0;
}