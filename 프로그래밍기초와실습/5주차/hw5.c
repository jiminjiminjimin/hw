#include <stdio.h>
int main(void) 
{
	int x = 0;
	int y = 0;
	int a = 0;
	printf("ù��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("ù��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &y);
	printf("1�� ����\n2�� ����\n3�� ����\n4�� ������\n�����ϰ� ���� ������ ��ȣ�� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	if(a == 1){
		printf("%d", x + y);
	}
	else if(a == 2){
		if (x > y) {
			printf("(x>y)%d", x - y);
		}
		else if (x < y) {
			printf("(x<y)%d", y - x);
		}
		else {
			printf("0");
		}
	}
	else if(a == 3){
		printf("%d", x * y);
	}
	else if(a == 4){
		if (x > y) {
			printf("(x>y)%d", x / y);
		}
		else if (x < y) {
			printf("(x<y)%d", y / x);
		}
		else {
			printf("1");
		}
	}
	else{
		printf("���� �����ȣ�Դϴ�.");
	}
}