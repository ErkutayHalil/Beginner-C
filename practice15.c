#include <stdio.h>
int main()
{
    int i,j;
    int length;

    printf("Enter the length: ");
    scanf("%d",&length);

    for(i=1;i<=length;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;

}