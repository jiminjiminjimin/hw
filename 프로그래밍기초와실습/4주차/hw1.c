#include <stdio.h>
int main(void)
{
	double x;
	printf("x값을 입력하세요 : ");
	scanf("%lf",&x);
	if (x > 0) {
		printf("x가 0보다 클 때 f(x)의 값은 %lf입니다.",7*x+2);
	}
	else {		printf("x가 0보다 작거나 같을때 f(x)의 값은 %lf입니다.", x*x-9*x+2);	}	return 0;}