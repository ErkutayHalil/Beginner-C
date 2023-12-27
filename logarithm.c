#include <stdio.h> 
#include <math.h>
int main()
{
    double number;
    double result1,result2;

    printf("Enter the number: ");
    scanf("%lf",&number);
    result1 = log10(number); 

    printf("The result is(log): %.3lf",result1);
    printf("\n");

    result2 = log(number);

    printf("The result is(ln): %.4lf",result2);

    return 0;
}