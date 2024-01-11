#include <stdio.h>
int main()
{
    int j,sum=65432;
    for(j=5;j>0;j--)
    {
        printf("a");
        printf("%d\n",sum);
        sum=sum/10;
    }
}