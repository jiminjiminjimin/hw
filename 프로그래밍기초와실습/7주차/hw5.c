#include <stdio.h>

int sigma(int n) {
	int result=0;
	int i;
	
	for (i = 1; i <= n; i++) {
		result+=i;
		
	}
	return result;


}
int main(void) {
	
	int a;
	printf("1부터 n까지의 합을 구할 n을 입력하시오");
	scanf("%d", &a);
	printf("1부터 n까지의 합 : %d", sigma(a));
}