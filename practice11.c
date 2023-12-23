#include <stdio.h>
int main()
{
    int i,number,result=0;
    
    for(i=0;i<4;i++)
    {
        printf("Enter the number: ");
        scanf("%d",&number);
        result = result + number;
    }

    printf("The result is: %d",result);

    return 0;
    
}