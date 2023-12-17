#include <stdio.h>
int main()
{
    int numbers[]={2,32,5,3};
    int multiplication = 1;
    int i;

    for(i=0;i<4;i++)
    {
        multiplication = multiplication * numbers[i];
    }

    printf("Multiplication = %d",multiplication);

    return 0;

}