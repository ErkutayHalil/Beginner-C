#include <stdio.h>
int main()
{
    int i,j,a;
    int space,star;
    printf("How many rows do you want: ");
    scanf("%d",&a);
    space = a - 1;
    star = 1;
    for(i=0;i<a;i++)
    {
        for(j=0;j<space;j++)
        {
            printf(" ");
        }
        for(j=0;j<star;j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star = star + 2;
    }
}