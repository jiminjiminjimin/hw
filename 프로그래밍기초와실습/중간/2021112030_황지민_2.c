//2021112030 황지민
#include <stdio.h>
int main(void) {
	int a=0;
	int b = 1;
	int c=0;
	printf("1부터 10 사이의 정수를 입력하세요 : ");
	scanf("%d", &a);
	if (a <= 10&&a>=1) {
		if (a % 2 == 0) {
			for (int i = 1; i <= a;i++) {
				b =b*i;
			}
			printf("1부터%d의 곱은 %d입니다",a,b);
		}
		else {
			for (int i = 1; i <= a; i++) {
				c =c+ i;
			}
			printf("1부터%d의 합은 %d입니다",a,c);
		}
	}
}
