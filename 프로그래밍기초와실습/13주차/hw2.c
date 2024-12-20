#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	printf("문자열을 입력하시오 : ");
	char s[20];
	gets_s(s,20);
	char* token;
	int count = 0;
	token = strtok(s," ");
	char *a = token;
	token = strtok(NULL, " ");
	int b = atoi(token);
	token = strtok(NULL, " ");
	int c = atoi(token);
	if (strcmp(a, "add") == 0){
		printf("연산의 결과 : %d\n", b + c);
	}
	else if(strcmp(a, "sub") == 0) {
		printf("연산의 결과 : %d\n", b - c);
	}
	else if (strcmp(a, "mul") == 0) {
		printf("연산의 결과 : %d\n", b * c);
	}
	else if (strcmp(a, "div") == 0) {
		printf("연산의 결과 : %d\n", b / c);
	}
	
}