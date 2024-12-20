
#include <stdio.h>
	int main(void)
	{

		int* p = (int*)1000;
		double* q = (double*)2000;
		printf("%d\n", p + 2); //int형은 크기가 4라 주소가 4단위로 움직임 그래서 1000에서 8이 이동하여 1008 이 나옴
		printf("%d\n", q + 1); //double형은 크기가 8이라 주소가 8단위로 움직임 그래서 2000에서 8이 이동하여 2008이 나옴

	}