//2021112030 Ȳ����
#include <stdio.h>
int main(void) {
	int a;
	printf("�����Է�: ");
	scanf("%d", &a);
	double k=0;
	double i;
	for (i = 1; i < a; i++) {
			k = k + i/(i+1);
			
		}
	printf("�����: %.2lf", k);
}