#include <stdio.h>

int get_tax(income) {
	if (income>1000) {
		return ((income-1000)* 0.1)+(1000*0.08);
	}
	else {
		return income * 0.08;
	}

}

int main(void)
{
	int a;
	printf("소득을 입력하시오(만원) : ");
	scanf("%d", &a);
	printf("%d만원의 소득세는 %d만원입니다", a, get_tax(a));
}