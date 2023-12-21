#include <stdio.h>
int main()
{
    int i,number,power,result=1;
    printf("Enter a positive number: ");
    scanf("%d",&number);
    printf("Enter a positive power of the number: ");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        result = result*number;
        
        if(power==0)
        {
            printf("The result = 1 ");
        }

    }

    printf("The result = %d",result);

    return 0;

    
}