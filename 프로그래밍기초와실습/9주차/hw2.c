#include <stdio.h>

int check() {
	static c = 0;
	if (c == 3) {
		printf("�α��� �õ� Ƚ�� �ʰ�\n");
		return 0;
	}

	int a=0;
	scanf("%d", &a);	
	
	if(c<=2) {
		if (a == 1234) {
			printf("Ȯ�εǾ����ϴ�.\n");
		}
		else {
			c += 1;
			printf("Ʋ�� ��й�ȣ�Դϴ�.\n");
			check();
		}
	}
}

int main(void) {
	check();
}