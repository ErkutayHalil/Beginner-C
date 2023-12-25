#include <stdio.h>
int main()
{
    int i,small,big,bcost=0,scost=0;

    printf("Enter the small ones weight: ");
    scanf("%d",&small);

    printf("\n");

    printf("Enter the big ones weight: ");
    scanf("%d",&big);

    printf("\n");

    for(i=8;i<small;i++)
    {
        scost = scost + 4;
    }

    for(i=15;i<big;i++)
    {
        bcost = bcost + 5;
    }

    printf("Small ones cost: %d\n",scost);

    printf("Big ones cost: %d\n",bcost);

    return 0;


}