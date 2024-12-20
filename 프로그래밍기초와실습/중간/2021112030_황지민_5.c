//2021112030 황지민
#include <stdio.h>
int diff(char x, char y) {
	if (x - y > 0) {
		return x - y;
	}
	else {
		return y - x;
	}
}

int main(void) {
	for (;;) {
		char c=0;
		char d=0;
		printf("두 소문자를 입력하세요 : ");
		scanf("%c %c", &c, &d);
		if (c >= 97 && c <= 122 && d >= 97 && d <= 122) {
			
			printf("문자 %c %c의 차는 %d입니다\n", c, d, diff(c, d));
		}
		else {
			printf("종료합니다");
			break;
		}
	}
}
