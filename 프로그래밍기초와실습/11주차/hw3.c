#include<stdio.h>

void sum(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	*p_diff = x - y;
	return 0;
}
int main(void) {
	int a, b;
	int c = 0;
	int d = 0;
	printf("2���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &a,&b);
	sum(a, b, &c, &d);
	printf("���ҵ��� �� : %d\n", c);
	printf("���ҵ��� �� : %d", d);

}