#include <stdio.h>
int main()
{
    int width,lenght,i,j;
    printf("Enter the width: ");
    scanf("%d",&width);
    printf("Enter the lenght: ");
    scanf("%d",&lenght);

    for(i=1;i<=lenght;i++)
    {
        for(j=1;j<=width;j++)
        {
            printf("*");
        }
        printf("\n");
    }



}

    