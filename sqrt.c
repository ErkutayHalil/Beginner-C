#include <stdio.h> 
#include <math.h>
int main()
{
    int number;
    double result;

    printf("Enter the number: ");
    scanf("%d",&number);
    result = sqrt(number);

    printf("The result is: %.4lf",result);

    return 0;
}