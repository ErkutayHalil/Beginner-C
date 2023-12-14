#include <stdio.h>
int main()
{
    int i,number;
    int factorial = 1;

    printf("Enter the number: ");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of the number is = %d\n",factorial);

    return 0;
}