#include <stdio.h>
int main(void)
{
	double x;
	printf("x���� �Է��ϼ��� : ");
	scanf("%lf",&x);
	if (x > 0) {
		printf("x�� 0���� Ŭ �� f(x)�� ���� %lf�Դϴ�.",7*x+2);
	}
	else {		printf("x�� 0���� �۰ų� ������ f(x)�� ���� %lf�Դϴ�.", x*x-9*x+2);	}	return 0;}