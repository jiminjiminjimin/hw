//2021112030 Ȳ����
#include <stdio.h>
int main(void) {
	int a=0;
	int b = 1;
	int c=0;
	printf("1���� 10 ������ ������ �Է��ϼ��� : ");
	scanf("%d", &a);
	if (a <= 10&&a>=1) {
		if (a % 2 == 0) {
			for (int i = 1; i <= a;i++) {
				b =b*i;
			}
			printf("1����%d�� ���� %d�Դϴ�",a,b);
		}
		else {
			for (int i = 1; i <= a; i++) {
				c =c+ i;
			}
			printf("1����%d�� ���� %d�Դϴ�",a,c);
		}
	}
}
