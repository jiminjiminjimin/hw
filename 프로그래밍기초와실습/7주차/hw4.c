#include <math.h>
#include <stdio.h>

double get_distance(double x1, double y1, double x2, double y2) {
	double k = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	return sqrt(k);

}

int main(void) {
	double a, b, c, d;
	printf("첫번째 점의 좌표를 입력하시오(x1,y1) : ");
	scanf("%lf %lf", &a, &b);
	printf("두번째 점의 좌표를 입력하시오(x2,y2) : ");
	scanf("%lf %lf", &c, &d);
	printf("%lf",get_distance(a, b, c, d));
}