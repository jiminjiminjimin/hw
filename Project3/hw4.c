#include <stdio.h>
int main(void)
{
	int i = 1;
	double r = 0;
	int n = 0;
	printf("�Ǽ��� ���� �Է��Ͻÿ� : ");
	scanf("%lf", &r);
	int k = r;
	printf("�ŵ�����Ƚ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	while (i < n) {
		i = i + 1;
		r = r * k;
	}
	printf("��� ���� : %lf \n", r);
}