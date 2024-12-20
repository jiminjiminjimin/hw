//2021112030 황지민
#include <stdio.h>
#include <math.h>
int simple(x,y,z) {
	int result = 0;
	for (int i = 0; i < z; i++) {
		result += x * y * 0.01;
		printf("%d \n ", result);
	}
	return result;
}

int main(void) {
	int a, b, c; // a 원금 b 이자 c 기간
	scanf_s("%d %d %d", &a, &b, &c);
	printf("단리이자는 %d입니다 총합은입니다", simple(a, b, c));
}