
#include <stdio.h>
int main(void)
{
	int x;
	printf("õ�� ������ ������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("�Է��� ���� %d�Դϴ�.\n", x);
	int k = x / 10000;
	int a = x % 10;
	x = x / 10;
	int b = x % 10;
	x = x / 10;
	int c = x % 10;
	x = x / 10;
	int d = x % 10;
	printf("%d�� %dõ %d�� %d�� %d�Դϴ�.\n",k, d, c, b, a);
	return 0;

}
