#include <stdio.h>
int main()
{
    int i,number,sum=0;
    
    printf("Enter a positive number: ");
    scanf("%d",&number);

    for(i=0;i<=number;i++)
    {
        if(i%2!=0)
        {
            sum = sum + i;
        }
        
    }

    printf("Sum of the odd numbers = %d",sum);

    return 0;


}