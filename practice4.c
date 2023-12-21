#include <stdio.h>
int main()
{
    int i,number,sum=0;

    printf("Enter the number: ");
    scanf("%d",&number);

    for(i=0;i<=number;i++)
    {
        sum = sum + i*i;
    }
    
    printf("Sum of squares of the numbers = %d",sum);

    return 0;
}