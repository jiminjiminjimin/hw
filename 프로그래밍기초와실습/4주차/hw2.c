#include <stdio.h>
int main(void)
{
	int x;
	int y;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x); 
	printf("2�� ���ϰ� ���� Ƚ�� : ");
	scanf("%d", &y);
	printf("%d << %d�� �� : ", x, y);
	x = x << y ;
	printf("%d\n", x);	return 0;}