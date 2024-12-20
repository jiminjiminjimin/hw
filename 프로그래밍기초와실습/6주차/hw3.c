#include <stdio.h>
int main(void) {
	int i, k,j;
	for (i = 0;i<10; i++) {
		for (j = 9; j > i; j--) {
			printf(" ");
		}
		for (k = i; k>=0  ; k--) {
			printf("%d", k);
		}
		printf("\n");
		
		
	}
}