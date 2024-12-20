//2021112030 È²Áö¹Î
#include <stdio.h>
int main(void) {
    int n;
    scanf_s("%d", &n);
    int a[8] = { 0 };

    for (int i = 0; i < 8; i++) {
        a[i] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < 8; i++) {
        printf(a[i]);
    }
    /*int b[4];
    for (int i = 0; i < 4; i++) {
        if (a[i] == 0 && a[i + 4] == 0) {
            b[i] = 0;
        }
        else {
            b[i] = 1;
        }
    }
    printf(b[3]);*/
}