#include <stdio.h>
int main(void)
{
	int x;
	
	printf("�����Ͻÿ�(1:���� 2:���� 3:��)");
	scanf("%d", &x);
	
	int y = rand()%3+1;

	if(x==1){
		if (y == 1) {
			printf("�����ϴ�.");
		}
		else if (y == 2) {
			printf("�����ϴ�.");
		}
		else if (y == 3) {
			printf("�̰���ϴ�.");
		}

	
	}
	else if(x==2){
		if (y == 2) {
			printf("�����ϴ�.");
	}
		else if (y == 3) {
			printf("�����ϴ�.");
	}
		else if (y == 1) {
			printf("�̰���ϴ�.");
	}
	}
	else if (x == 3) {
		if (y == 3) {
			printf("�����ϴ�.");
		}
		else if (y == 1) {
			printf("�����ϴ�.");
		}
		else if (y == 2) {
			printf("�̰���ϴ�.");
		}
	}

	return 0;}