#include <stdio.h>
int main(void) 
{
	int x = 0;
	int y = 0;
	int a = 0;
	printf("첫번째 수를 입력하시오 : ");
	scanf("%d", &x);
	printf("첫번째 수를 입력하시오 : ");
	scanf("%d", &y);
	printf("1번 덧셈\n2번 뺄셈\n3번 곱셈\n4번 나눗셈\n수행하고 싶은 연산의 번호를 입력하시오 : ");
	scanf("%d", &a);
	if(a == 1){
		printf("%d", x + y);
	}
	else if(a == 2){
		if (x > y) {
			printf("(x>y)%d", x - y);
		}
		else if (x < y) {
			printf("(x<y)%d", y - x);
		}
		else {
			printf("0");
		}
	}
	else if(a == 3){
		printf("%d", x * y);
	}
	else if(a == 4){
		if (x > y) {
			printf("(x>y)%d", x / y);
		}
		else if (x < y) {
			printf("(x<y)%d", y / x);
		}
		else {
			printf("1");
		}
	}
	else{
		printf("없는 연산번호입니다.");
	}
}