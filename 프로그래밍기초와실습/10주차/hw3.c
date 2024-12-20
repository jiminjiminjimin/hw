#include <stdio.h>
int main(void)
{
    int a[5][2];
    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생 중간, 기말 점수를 입력하세요 : ",i+1);
        scanf("%d %d", &a[i][0], &a[i][1]);
    }
    printf("중간\t기말\t총점\t석차\n");
    int s[5];
    for (int i = 0; i < 5; i++) {
        s[i] = a[i][0] + a[i][1];
    }
    int rank[5]={0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (s[i] < s[j]) {
                rank[i] += 1;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\t%d\t%d\n", a[i][0], a[i][1], s[i],rank[i]+1);
        
    }
       
    
}


