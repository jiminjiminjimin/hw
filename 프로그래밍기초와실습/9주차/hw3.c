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
	printf("������ �Է��Ͻÿ� : ");
	int a = 0;
	scanf("%d", &a);
	printf("�ڸ��� : %d\n", check(a));
}