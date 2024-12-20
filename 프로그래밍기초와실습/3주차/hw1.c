
#include <stdio.h>
int main(void)
{
	int x;
	printf("천만 이하의 정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("입력한 수는 %d입니다.\n", x);
	int k = x / 10000;
	int a = x % 10;
	x = x / 10;
	int b = x % 10;
	x = x / 10;
	int c = x % 10;
	x = x / 10;
	int d = x % 10;
	printf("%d만 %d천 %d백 %d십 %d입니다.\n",k, d, c, b, a);
	return 0;

}
