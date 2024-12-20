#include <stdio.h>
int main(void)
{
	int x;
	
	printf("선택하시오(1:가위 2:바위 3:보)");
	scanf("%d", &x);
	
	int y = rand()%3+1;

	if(x==1){
		if (y == 1) {
			printf("비겼습니다.");
		}
		else if (y == 2) {
			printf("졌습니다.");
		}
		else if (y == 3) {
			printf("이겼습니다.");
		}

	
	}
	else if(x==2){
		if (y == 2) {
			printf("비겼습니다.");
	}
		else if (y == 3) {
			printf("졌습니다.");
	}
		else if (y == 1) {
			printf("이겼습니다.");
	}
	}
	else if (x == 3) {
		if (y == 3) {
			printf("비겼습니다.");
		}
		else if (y == 1) {
			printf("졌습니다.");
		}
		else if (y == 2) {
			printf("이겼습니다.");
		}
	}

	return 0;}