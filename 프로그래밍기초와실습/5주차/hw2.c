#include <stdio.h>

int main(void) {
	int x = 10;
	int i = 0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("약수 : ");
	while (i <= x) {
		i = i + 1;
		if (x % i == 0) {
			printf("%d ", i);
		}
		
		
	}
	
}