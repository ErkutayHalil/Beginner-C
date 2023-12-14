#include <stdio.h>
int main()
{
    int factorial,number;
    factorial = 1;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("\n\n");

    while(number>1)
    {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial of the number is= %d\n",factorial);
}