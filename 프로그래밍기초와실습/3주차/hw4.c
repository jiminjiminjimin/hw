
#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int z;
	printf("3개의 정수를 입력하세요 : ");
	scanf("%d %d %d", &x,&y,&z);
	int max=(x>y)?((x>z)?x:z):((y>z)?y:z);
	printf("최댓값 : %d",max );

	return 0;

}
