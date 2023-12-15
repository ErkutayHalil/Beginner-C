#include <stdio.h>
int main()
{
    int number1,number2,result;
    char calculate;
    number1 = 63;
    number2 = 7;
    printf("Enter a calculating symbol: ");
    scanf("%s",&calculate);

    switch(calculate)
    {
        case '+':
            result = number1 + number2;
            printf("result = %d",result);
            break;

        case '-':
            result = number1 - number2;
            printf("result = %d",result); 
            break;   

        case '*':
            result = number1 * number2;
            printf("result = %d",result);   
            break; 

        case '/':
            result = number1 / number2;
            printf("result = %d",result);  
            break;  

        default: printf("The symbol you entered is not exist in this code");  

    }






}