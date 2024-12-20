//2021112030 황지민
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int k, i, j, ran[26];
	srand(time(NULL));
	for (i = 0; i < 26; i++)
	{
		ran[i] = rand() % 26 + 65;
		for (j = 0; j < i; j++)
		{
			if (ran[i] == ran[j])
				i--;
		}
	}
	printf("문자열 입력");
	char a[100]="";
	gets_s(a, 100);
	for (i; i<100; i++) {
		for (int j=65; j < 26; j++) {
			if (a[i] = j) {
				a[i] = ran[j];
			}
		}
		
	}
	
	printf("%s\n", a);
	printf("알 파 벳 :  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
	printf("암호 코드 : ");
	for (i = 0; i < 26; i++)
		printf("%c ", ran[i]);
}