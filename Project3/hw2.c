#include <stdio.h>

int main(void) {
	int x = 0;
	int i = 0;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("��� : ");
	while (i <= x) {
		i++;
		if (x % i == 0) {
			printf("%d ", i);
		}
		
		
	}
	
}