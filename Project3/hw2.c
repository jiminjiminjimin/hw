#include <stdio.h>

int main(void) {
	int x = 0;
	int i = 0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("약수 : ");
	while (i <= x) {
		i++;
		if (x % i == 0) {
			printf("%d ", i);
		}
		
		
	}
	
}