//2021112030 황지민
#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("국어, 수학, 영어 점수 입력 : ");
	scanf("%d %d %d",&a,&b,&c);
	double k = a;
	double l = b;
	double f = c;
	double average=(k+l+f)/3;
	printf("평균 점수는 %.2lf입니다\n",average);
	if (a <= 40||b<=40||c<=40||average<=60) {
		printf("불합격입니다\n");

	}
	else {
		printf("합격입니다\n");
	}
	
}