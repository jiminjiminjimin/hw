/*#include <stdio.h>
#include <stdlib.h>

int main()
{

int decimal, i, bit;
scanf("%d",&decimal);
int flag = 0;
printf("Decimal %d => Binary " , decimal);
for (i=31;i>=0;i--){
	bit = (decimal >> i) & 1;
	if (bit==1) flag=1;
	if (flag==1) printf("%d",bit);
}


    return 0;
}
*/

