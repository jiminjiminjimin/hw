#include <stdio.h>
int main(void) {
	int a = 0;
	double x = 2;
	int i = 1;
	printf("���̸� ���� Ƚ���� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	while (i < a) {
		i = i + 1;
		x = x*2;
		
	}
	printf("%dȸ ���� �� �β��� %lfmm�̴�\n",a, x);
}