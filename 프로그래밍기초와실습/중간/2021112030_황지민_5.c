//2021112030 Ȳ����
#include <stdio.h>
int diff(char x, char y) {
	if (x - y > 0) {
		return x - y;
	}
	else {
		return y - x;
	}
}

int main(void) {
	for (;;) {
		char c=0;
		char d=0;
		printf("�� �ҹ��ڸ� �Է��ϼ��� : ");
		scanf("%c %c", &c, &d);
		if (c >= 97 && c <= 122 && d >= 97 && d <= 122) {
			
			printf("���� %c %c�� ���� %d�Դϴ�\n", c, d, diff(c, d));
		}
		else {
			printf("�����մϴ�");
			break;
		}
	}
}
