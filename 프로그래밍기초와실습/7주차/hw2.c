#include <stdio.h>

int get_tax(income) {
	if (income>1000) {
		return ((income-1000)* 0.1)+(1000*0.08);
	}
	else {
		return income * 0.08;
	}

}

int main(void)
{
	int a;
	printf("�ҵ��� �Է��Ͻÿ�(����) : ");
	scanf("%d", &a);
	printf("%d������ �ҵ漼�� %d�����Դϴ�", a, get_tax(a));
}