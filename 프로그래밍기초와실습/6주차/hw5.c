#include <stdio.h>
int main(void) {
	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	int r = a;
	do {
		printf("%d", r % 10);
		r /= 10;
		
	} while (r >= 1);
	

}