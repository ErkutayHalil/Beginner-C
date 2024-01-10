#include <stdio.h>
int main()
{
    int i,num[5];
    num[0]=80;
    num[1]=239;
    num[2]=-234;
    num[3]=0;
    num[4]=848;

    for(i=5;i>0;i--)
    {
        printf("\nThe %d. number is: %d",i,num[i-1]);
    }

}