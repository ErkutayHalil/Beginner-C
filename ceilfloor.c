#include <stdio.h> 
#include <math.h>
int main()
{
    double number,result1,result2;
    int result;

    printf("Enter the number: ");
    scanf("%lf",&number);
    result1 = floor(number);

    printf("The base of the number is : %.f",result1);
    printf("\n");

    result2 = ceil(number);

    printf("The ceiling of the number is : %.f",result2);

    return 0;
}