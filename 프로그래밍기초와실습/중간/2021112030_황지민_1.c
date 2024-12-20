//2021112030 황지민
#include <stdio.h>
int main(void) {
	int a;
	printf("정수입력: ");
	scanf("%d", &a);
	double k=0;
	double i;
	for (i = 1; i < a; i++) {
			k = k + i/(i+1);
			
		}
	printf("계산결과: %.2lf", k);
}