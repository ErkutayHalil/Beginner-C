#include <stdio.h>
int main()
{
    int side,i,j,k;
    int space,star=1;
    printf("Enter one of the sides lenght: ");
    scanf("%d",&side);
    space=side-1;
    for(i=0;i<side;i++)
    {
        for(k=0;k<space;k++)
        {
            printf(" ");
        }
        for(j=0;j<star;j++)
        {
            printf("*");
        }
        space--;
        star+=2;
        printf("\n");
    }
}