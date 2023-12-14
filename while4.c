#include <stdio.h>
int main()
{
    int factorial,number;
    factorial = 1;
    number = 5;

    while(number>1)
    {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial of the number is= %d\n",factorial);
}