#include <stdio.h>
int main(void)
{
	int x;
	int y;
	printf("정수를 입력하세요 : ");
	scanf("%d", &x); 
	printf("2를 곱하고 싶은 횟수 : ");
	scanf("%d", &y);
	printf("%d << %d의 값 : ", x, y);
	x = x << y ;
	printf("%d\n", x);	return 0;}