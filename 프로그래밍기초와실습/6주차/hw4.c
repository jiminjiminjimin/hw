#include <stdio.h>
int main(void) {
	int i, k, n;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) {
				break;
			}

		}
		if (k == i) {
			printf("%d ", k);
		}
		
	}
	printf("\n");
}