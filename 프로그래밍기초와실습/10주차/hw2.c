#include <stdio.h>
int main(void)
{
    int i, j=0;
    int a[5][5];
    printf("<���� ���>\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            a[i][j] = i * 5 + j+1;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
   
    printf("\n<��� ���� �ٲ� ���>\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    
}


