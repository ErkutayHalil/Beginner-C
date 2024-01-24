#include <stdio.h>
int main()
{
    int i,j,k,space;
    space=0;
    for(i=0;i<5;i++)
    {
        for(k=0;k<space;k++)
        {
            printf(" ");
        }
        for(j=5;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
        space++;
    }
}