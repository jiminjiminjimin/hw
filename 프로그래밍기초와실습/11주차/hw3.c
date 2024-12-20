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
	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &a,&b);
	sum(a, b, &c, &d);
	printf("원소들의 합 : %d\n", c);
	printf("원소들의 차 : %d", d);

}