#include <stdio.h>

int main(void) {
	int x = 10;
	int i = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("��� : ");
	while (i <= x) {
		i = i + 1;
		if (x % i == 0) {
			printf("%d ", i);
		}
		
		
	}
	
}