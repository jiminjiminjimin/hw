#include <stdio.h>
struct point {
	int x, y;
};
struct circle {
	struct point center;
	double radius;
};
double area(struct circle c) {
	return c.radius * c.radius * 3.14;
}
double perimeter(struct circle c) {
	return c.radius * 2 * 3.14;
}


int main(void) {
	struct circle a;
	printf("���� �߽��� : ");
	scanf("%lf %lf", &a.center.x, & a.center.y);
	printf("���� ������ : ");
	scanf("%lf", &a.radius);
	
	printf("���� ���� : %lf\n",area(a));
	printf("���� �ѷ� : %lf\n", perimeter(a));
}