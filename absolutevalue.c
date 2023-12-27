#include <stdio.h> 
#include <math.h>
int main()
{
    double number;
    double result;

    printf("Enter the number: ");
    scanf("%lf",&number);
    result = fabs(number);

    printf("The result is: %lf",result);

    return 0;
}