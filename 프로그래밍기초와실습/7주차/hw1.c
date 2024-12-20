#include <stdio.h>

int is_leap(int year) {
	if (year % 4 == 0 && year % 100 != 0) {
		return 366;
	}
	else if (year % 4==0 && year % 100 == 0 && year % 400==0) {
			return 366;
	}		
		
	else { return 365; }
		
}

int main(void)
{
	int a;
	printf("연도를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d년은 %d일입니다",a, is_leap(a));
}