#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int response(char* prompt) {
	if (strcmp(prompt, "yes") == 0 ){
		return 1;
	}
	else if(strcmp(prompt, "ok") == 0) {
		return 1;
	}
	else if (strcmp(prompt, "no") == 0) {
		return 0;
	}
	else {
		return 2;
	}

}

int main(void) {
	printf("������ �Ͻðڽ��ϱ�? : ");
	char s[5];
	gets_s(s,5);
	int i = 0;
	while (1) {
		s[i]=tolower(s[i]);
		i += 1;
		if (s[i] == '\0') {
			break;
		}
	}

	
	if (response(s) == 1) {
		printf("�������� �亯\n");
	}
	else if (response(s) == 0) {
		printf("�������� �亯\n");
	}
}