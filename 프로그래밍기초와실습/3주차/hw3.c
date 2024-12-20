
#include <stdio.h>
int main(void)
{
	double x;
	double y;
	printf("x좌표를 입력하시오 : ");
	scanf("%lf", &x);
	printf("y좌표를 입력하시오 : ");
	scanf("%lf", &y);
	long result = (x > 0) && (y > 0) ? "1사분면" : (x < 0) && (y > 0) ? "2사분면" :(x<0)&&(y<0)? "3사분면" : "4사분면" ;
	printf("%s\n", result);

	
	return 0;

}
