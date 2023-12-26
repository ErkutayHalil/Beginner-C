#include <stdio.h>
int main()
{
    int i,number1,number2,great,less,sum=0;
    retry:
    
    printf("Enter the first number: ");
    scanf("%d",&number1);

    printf("Enter the second number: ");
    scanf("%d",&number2);

    if(number1 == number2)
    {
        goto retry;
    }
    else
    {
        if(number1 > number2)
        {
            great = number1;
            less = number2;
        }
        else
        {
            great = number2;
            less = number1;
        }
    }

    for(i=less;i<=great;i++)
    {
        sum = sum + i;
    }
    printf("Sum of these numbers: %d",sum);

    return 0;

   
}