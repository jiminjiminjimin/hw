//2021112030 Ȳ����
#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("����, ����, ���� ���� �Է� : ");
	scanf("%d %d %d",&a,&b,&c);
	double k = a;
	double l = b;
	double f = c;
	double average=(k+l+f)/3;
	printf("��� ������ %.2lf�Դϴ�\n",average);
	if (a <= 40||b<=40||c<=40||average<=60) {
		printf("���հ��Դϴ�\n");

	}
	else {
		printf("�հ��Դϴ�\n");
	}
	
}