//2021112030 Ȳ����
#include <stdio.h>
#include <math.h>
int simple(x,y,z) {
	int result = 0;
	for (int i = 0; i < z; i++) {
		result += x * y * 0.01;
		printf("%d \n ", result);
	}
	return result;
}

int main(void) {
	int a, b, c; // a ���� b ���� c �Ⱓ
	scanf_s("%d %d %d", &a, &b, &c);
	printf("�ܸ����ڴ� %d�Դϴ� �������Դϴ�", simple(a, b, c));
}