#include <stdio.h>

int main(void)
{
	printf("x 값을 입력하세요: ");
	int x=0;
	scanf("%d", &x);
	printf("y 값을 입력하세요: ");
	int y=0;
	scanf("%d", &y);
	printf("교환 전 : x=%d y=%d \n", x, y);

	int c = y;

	int d = x;

	printf("교환 후 : x=%d y=%d \n", c, d);




	return 0;




}
