#include <stdio.h>
#define pi 3.141592

int main(void)
{
	double x;
	printf("���� �������� �Է��Ͻÿ� : ");
	scanf("%lf",&x);	printf("ǥ������ %lf�Դϴ�.\n", pi * x * x * 4);	printf("ü���� %lf�Դϴ�.\n", pi * x * x * x * 4 / 3);	return 0;}