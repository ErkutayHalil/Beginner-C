#include <stdio.h>
int main()
{
    int c=0;
    int i;

    for(i=1;i<=10;i++)
    {
        c = c + i;
    }
    printf("c = %d\n",c);

    return 0;

}