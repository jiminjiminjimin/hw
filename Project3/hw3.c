#include <stdio.h>
int main(void)
{
	int time = 0;
	printf("�ð��� �Է��Ͻÿ� : ");
	scanf("%d", &time);
	int i = 0;
	int x = 10;
	while (i < time) {
		i=i++;
		x = x * 4;
			}
	printf("%d�ð� ���� ������ �� : %d \n", i, x);
}