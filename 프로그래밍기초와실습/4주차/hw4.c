#include <stdio.h>
#define pi 3.141592

int main(void)
{
	double x;
	printf("구의 반지름을 입력하시오 : ");
	scanf("%lf",&x);	printf("표면적은 %lf입니다.\n", pi * x * x * 4);	printf("체적은 %lf입니다.\n", pi * x * x * x * 4 / 3);	return 0;}