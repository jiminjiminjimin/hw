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
	printf("1���� n������ ���� ���� n�� �Է��Ͻÿ�");
	scanf("%d", &a);
	printf("1���� n������ �� : %d", sigma(a));
}