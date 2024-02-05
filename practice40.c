//How to draw an inverted equilateral triangle?
#include <stdio.h>
int main()
{
    int star1,space1=0,side;
    int i,j,k;
    printf("Enter the one side of triangle: ");
    scanf("%d",&side);
    star1=side;
    for(i=0;i<side;i++)
    {
        for(k=0;k<=space1;k++)
        {
            printf(" ");
        }
        for(j=star1;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
        space1++;
        star1=star1-1;

    }
    
}