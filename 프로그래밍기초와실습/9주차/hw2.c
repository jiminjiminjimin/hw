#include <stdio.h>

int check() {
	static c = 0;
	if (c == 3) {
		printf("로그인 시도 횟수 초과\n");
		return 0;
	}

	int a=0;
	scanf("%d", &a);	
	
	if(c<=2) {
		if (a == 1234) {
			printf("확인되었습니다.\n");
		}
		else {
			c += 1;
			printf("틀린 비밀번호입니다.\n");
			check();
		}
	}
}

int main(void) {
	check();
}