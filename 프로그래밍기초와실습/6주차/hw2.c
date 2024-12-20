#include <stdio.h>
int main(void) {
	int a;
	int i;
	printf("카운터의 초기값을 입력하시오 : ");
	scanf("%d", &a);
	for(i=a;i>=1;i--){
		printf("%d ", i);
	}
	printf("\n");
}