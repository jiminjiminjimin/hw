#include <stdio.h>
struct point {
	int x;
	int y;
};

int equal(struct point *p1, struct point *p2) {
	if (p1->x == p2->x && p1->y == p2 ->y) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void)
{
	struct point a;
	struct point b;
	printf("ù��° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &a.x, &a.y);
	printf("�ι�° ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &b.x, &b.y);
	if (equal(&a, &b) == 1) {
		printf("(%d, %d) == (%d, %d) ",a.x,a.y,b.x,b.y);
	}
	else {
		printf("(%d, %d) != (%d, %d) ",a.x, a.y, b.x, b.y);
	}
	
}