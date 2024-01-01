#include <stdio.h>
int main()
{
    int number1 = 10;
    int number2 = 20;
    double number3 = 50.34;
    char letter = 'c';

    printf("%d\n",number1);
    printf("%d\n",number2);
    printf("%.3f\n",number3);
    printf("%c\n",letter);

    printf("\n\nMemory Addresses\n\n");

    printf("%x\n",&number1);
    printf("%x\n",&number2);
    printf("%x\n",&number3);
    printf("%x\n",&letter);

    return 0;
    
}