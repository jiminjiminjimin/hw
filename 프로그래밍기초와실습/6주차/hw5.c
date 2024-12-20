#include <stdio.h>
int main(void) {
	int a;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	int r = a;
	do {
		printf("%d", r % 10);
		r /= 10;
		
	} while (r >= 1);
	

}