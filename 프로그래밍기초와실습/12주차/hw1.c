#include <stdio.h>
#include <conio.h>
int str_chr(char* s, int c) {
	int i;
	int count = 0;
	for (i = 0; i < strlen(s); i++) {
		if (s[i] == c) {
			count+=1;
		}
		
	}
	return count;
}
int main(void) {
	char str[100];
	char ch;
	printf("���ڿ��� �Է��Ͻÿ� : ");
	gets_s(str,100);
	
	
	for (int i = 0; i < 26; i++) {
		ch = i + 97;
		printf("%c : %d\n", i + 97, str_chr(str, ch));
	}
	
	return 0;
	
}