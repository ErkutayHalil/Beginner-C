#include <stdio.h>
int main()
{
    float number1,number2,avr;

    printf("Enter the first number: ");
    scanf("%f",&number1);

    printf("Enter the second number: ");
    scanf("%f",&number2);

    avr = (number1 + number2)/2;

    printf("Avarage = %f",avr);
    printf("\n\n");

    if(avr > 50.00)
    {
        printf("Avarage is greater than 50 ");
    }

    else
    {
        printf("Avarage is less than or equal to 50 ");
    }

    return 0;

}