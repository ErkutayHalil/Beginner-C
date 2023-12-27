#include <stdio.h> 
#include <math.h>
int main()
{
    int number,power;
    int result;

    printf("Enter the number: ");
    scanf("%d",&number);

    printf("Enter the power of the number: ");
    scanf("%d",&power);

    result = pow(number,power);
    
    printf("The result is: %d",result);

    return 0;
}