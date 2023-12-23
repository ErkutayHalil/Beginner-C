#include <stdio.h>
int main()
{
    int result=0;
    int number;

    while(number!=0)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        result = result + number;
    }
    printf("The result is: %d",result);

    
}