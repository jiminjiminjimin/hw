
#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int z;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &x,&y,&z);
	int max=(x>y)?((x>z)?x:z):((y>z)?y:z);
	printf("�ִ� : %d",max );

	return 0;

}
