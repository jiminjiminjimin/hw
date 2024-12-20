#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10]={3,7,4,2,5,0,9,8,1,6}, b[10], i, k;
for(k=0;k<10;k++){
    for(i=k;i>0&&b[i-1]>a[k];i--){
        b[i]=b[i-1];
    }
    b[i]=a[k];

    for(i=0;i<=k;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
}




return 0;
}
