#include <stdio.h>
int main()
{
    int i,j,k,l,width;

    printf("Enter the width: ");
    scanf("%d",&width);

    for(i=1;i<=width;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=1;k<=width;k++)
    {
        for(l=width;l>=k;l--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}   
