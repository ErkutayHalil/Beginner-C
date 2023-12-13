#include <stdio.h>
int main()
{
    int number1,number2,sum;

    number1 = 32;
    number2 = 17;
    sum = number1 + number2;

    if(sum <= 50)
    {
        printf("sum = %d and it is less than or equal to '50' ",sum);
    }
    else
    {
        printf("sum = %d and it is greater than '50' ",sum);
    }

    return 0;

}
    
    