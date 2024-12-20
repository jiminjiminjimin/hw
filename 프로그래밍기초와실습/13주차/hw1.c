#include <stdio.h>
#include <string.h>

int main(void) {
	char s[20];
	gets_s(s,20);
	char* token;
	int count = 0;
	token = strtok(s," ");
	while (token != NULL) {
		token = strtok(NULL," ");
		count = count + 1;
	}
	printf("단어의 수 : %d\n", count);
}