#include <stdio.h>
int main()
{
    int number,sum=0,i=0;
    printf("Enter a number: ");
    scanf("%d",&number);

    while(i<=number)
    {
        sum = sum + i;
        i++;
    }

    printf("Sum of the numbers is: %d ",sum);

    return 0;

}