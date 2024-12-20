#include <stdio.h>
int main(void) {
	int a = 0;
	double x = 2;
	int i = 1;
	printf("종이를 접을 횟수를 입력하시오 : ");
	scanf("%d", &a);
	while (i < a) {
		i = i + 1;
		x = x*2;
		
	}
	printf("%d회 접은 후 두께는 %lfmm이다\n",a, x);
}