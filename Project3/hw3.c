#include <stdio.h>
int main(void)
{
	int time = 0;
	printf("시간을 입력하시오 : ");
	scanf("%d", &time);
	int i = 0;
	int x = 10;
	while (i < time) {
		i=i++;
		x = x * 4;
			}
	printf("%d시간 후의 세균의 수 : %d \n", i, x);
}