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
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	printf("%d���� %d���Դϴ�",a, is_leap(a));
}