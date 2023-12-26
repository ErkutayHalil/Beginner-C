#include <stdio.h>
int main()
{
    int a,b,c,number,sum;
    
    printf("Enter the number : ");
    scanf("%d",&number);

    a = number / 100;
    b = (number / 10) % 10;
    c = number % 10;

    sum = a + b + c;

    printf("Sum of these numbers: %d",sum);

    return 0;
}