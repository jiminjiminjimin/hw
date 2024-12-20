
#include <stdio.h>
int main(void)
{
	double x;
	double y;
	printf("½Ç¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");
	scanf("%lf %lf", &x,&y);
	double ÇÕ = x + y;
	double Â÷ = x - y;
	double °ö = x * y;
	double ¸ò = x / y;
	printf("ÇÕ : %lf Â÷ : %lf °ö : %lf ¸ò : %lf \n",ÇÕ,Â÷,°ö,¸ò);
	return 0;

}
