#include <stdio.h>
int main()
{
    int numbers[]={23,165,9,153};
    int sum = 0;
    int i;

    for(i=0;i<4;i++)
    {
        sum = sum + numbers[i];
    }

    printf("Sum = %d",sum);

    return 0;

}