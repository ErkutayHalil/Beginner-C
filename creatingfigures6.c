#include <stdio.h>
int main()
{
    int i,j,width;

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

    return 0;

}   
