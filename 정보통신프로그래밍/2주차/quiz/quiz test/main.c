#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, rev=0;
num=2030;
rev=rev*10+num%10;printf("%d \t %d\n",num,rev);
num/=10;
rev=rev*10 + num%10;printf("%d \t %d\n",num,rev);
num/=10;
rev=rev*10 + num%10;printf("%d \t %d\n",num,rev);
num/=10;
rev=rev*10 + num%10;printf("%d \t %d\n",num,rev);
return 0;
};
