//2021112030 Ȳ����
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
	printf("���ڿ� �Է�");
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
	printf("�� �� �� :  A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
	printf("��ȣ �ڵ� : ");
	for (i = 0; i < 26; i++)
		printf("%c ", ran[i]);
}