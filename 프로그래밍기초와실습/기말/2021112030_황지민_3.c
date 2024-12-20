#include <stdio.h>
int sum(int n) {
	int result = 0;
	int a;
	if (n % 2 == 0) {
		a = n / 2;
	}
	else {
		a = (n + 1) / 2;
	}
	for (int i = 1; i <= a; i+2) {
		result += i;
	}
	return result;
}
int main(void) {
	int k;
	while (1) {
		scanf("%d", &k);
		if (k == 0 || k == 1) {
			break;
		}
		printf("%d",sum(k));
	}
}