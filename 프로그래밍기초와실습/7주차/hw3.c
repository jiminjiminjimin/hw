#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int b_rand() {
	srand((unsigned)time(NULL));
	int i = rand() % 2;
	if (i == 0) {
		return 0;

	}
	else {
		return 1;
	}
}


int main(void)
{
	
	
	int a;
	printf("��/��(1/0) : ");
	scanf("%d", &a);
	if (a == b_rand()) {
		printf("�¾ҽ��ϴ�");
	}
	else {
		printf("Ʋ�Ƚ��ϴ�");
	}
}