#include <stdio.h>
int main()
{
    int x,y,sum,sub,multi,div,mod;
    x=23;
    y=3;
    sum= x+y;
    sub= x-y;
    multi= x*y;
    div= x/y;
    mod= x%y;
    printf("Sum=%d\n",sum);
    printf("Substractian=%d\n",sub);
    printf("Multiplation=%d\n",multi);
    printf("Division=%d\n",div);
    printf("Mod x % y: %d\n",mod);

    return 0;
}