#include <stdio.h> 
#include <math.h>
int main()
{
    double degree;
    double resultsin,resultcos;
    
    printf("Enter the degree: ");
    scanf("%lf",&degree);
    degree = degree/57.29577; //If you want to see the radian value, don't use this.
    resultsin = sin(degree); 

    printf("Sinus of the degree is: %.4lf",resultsin);
    printf("\n");

    resultcos = cos(degree);

    printf("Cosinus of the degree is: %.4lf",resultcos);

    return 0;
}