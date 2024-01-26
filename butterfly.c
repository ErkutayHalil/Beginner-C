//How to make butterfly wings with stars?
#include <stdio.h>
int main()
{
    int i,j,k,l,space=8,space2=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        for(k=0;k<=space;k++)
        {
            printf(" ");
        }
        for(l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
        space = space - 2;
    }
    for(i=0;i<6;i++)
    {
        for(j=5;j>i;j--)
        {
            printf("*");
        }
        for(k=0;k<space2;k++)
        {
            printf(" ");
        }
        for(l=5;l>i;l--)
        {
            printf("*");
        }
        printf("\n");
        space2 = space2 + 2;
    }
}