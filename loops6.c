#include <stdio.h>
int main()
{
    int a=1;
    int j;

    for(j=1;j<=6;j++)
    {
        a = a * j;
    }
    printf("a! = %d\n",a);

    return 0;

}