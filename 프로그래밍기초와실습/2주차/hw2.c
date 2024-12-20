#include <stdio.h>

int main(void) {
	int a;
	printf("아스키 코드값을 입력하세요: ");
	scanf("%d", &a);
	printf("아스키 코드값에 해당하는 문자: ");
	printf("%c\n", a);

	return 0;

}