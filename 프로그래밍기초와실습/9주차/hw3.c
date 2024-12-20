#include <stdio.h>

int check(int x) {
	static c = 0;
	if (x < 1) {
		return c;
	}
	else {
		c += 1;
		x /= 10;
		check(x);
	}
}

int main(void) {
	printf("정수를 입력하시오 : ");
	int a = 0;
	scanf("%d", &a);
	printf("자리수 : %d\n", check(a));
}