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
	printf("원의 중심점 : ");
	scanf("%lf %lf", &a.center.x, & a.center.y);
	printf("원의 반지름 : ");
	scanf("%lf", &a.radius);
	
	printf("원의 면적 : %lf\n",area(a));
	printf("원의 둘레 : %lf\n", perimeter(a));
}