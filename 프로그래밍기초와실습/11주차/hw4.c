#include <stdio.h>
#include <math.h>
void gcd(int x, int y, int* p_lcm, int* p_gcd) {	
	int tmp;
	if (x < y) {
		tmp = x;
		x = y;
		y = tmp;
	}
	int k = x;
	int t = y;
	while (y!=0) {
		*p_gcd = x % y;
		x = y;
		y = *p_gcd;
	}
	*p_gcd = x;
	*p_lcm = (k * t) / x;
}
int main(void) {
	int a, b;
	int c = 0;
	int d = 0;
	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	gcd(a, b, &c, &d);
	printf("lcm : %d\n", c);
	printf("gcd : %d", d);

}