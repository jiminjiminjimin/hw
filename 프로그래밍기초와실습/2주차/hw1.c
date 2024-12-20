#include <stdio.h>

int main(void)
{
	double w, h, d;
	printf("상자의 가로 세로 높이를 한번에 입력 하십시오:\n");
	scanf("%lf", &w);
	scanf("%lf", &h);
	scanf("%lf", &d);
	double s=w*d*h;
	printf("상자의 부피는 %lf입니다.\n",s);

	return 0;




}
