#include <stdio.h>
#include "debug.h"

int main()
{
    int a = 5, b=7,sum=a+b;
#ifdef DEBUG_MODE
    printf("a = %d; b=%d\n", a,b);
#endif
/**/DEBUG_BEGIN(1)
/**/DEBUG_BEGIN(1)("a=%d;",a);
/**/DEBUG_BEGIN(1)("b=%d\n",b);
/**/DEBUG_END
printf("sum=%d\n",sum);
return 0;
}
