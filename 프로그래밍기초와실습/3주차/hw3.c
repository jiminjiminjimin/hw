
#include <stdio.h>
int main(void)
{
	double x;
	double y;
	printf("x��ǥ�� �Է��Ͻÿ� : ");
	scanf("%lf", &x);
	printf("y��ǥ�� �Է��Ͻÿ� : ");
	scanf("%lf", &y);
	long result = (x > 0) && (y > 0) ? "1��и�" : (x < 0) && (y > 0) ? "2��и�" :(x<0)&&(y<0)? "3��и�" : "4��и�" ;
	printf("%s\n", result);

	
	return 0;

}
