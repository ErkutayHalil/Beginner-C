#include <stdio.h>
int main()
{
    int hour;

    printf("How many hours did you spend in the parking lot? ");
    scanf("%d",&hour);

    if(hour>0 && hour<4)
    {
        printf("You owe 10 bux.");
    }

    if(hour>=4 && hour<8)
    {
        printf("You owe 12 bux.");
    }

    if(hour>=8 && hour<12)
    {
        printf("You owe 15 bux.");
    }

    if(hour>=12)
    {
        printf("You owe 20 bux.");
    }

    
}