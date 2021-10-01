#include <stdio.h>
int main(void)
{
	int i = 1;
	double r = 0;
	int n = 0;
	printf("실수의 값을 입력하시오 : ");
	scanf("%lf", &r);
	int k = r;
	printf("거듭제곱횟수를 입력하시오 : ");
	scanf("%d", &n);
	while (i < n) {
		i = i + 1;
		r = r * k;
	}
	printf("결과 값은 : %lf \n", r);
}