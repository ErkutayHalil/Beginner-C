#include <stdio.h>
int main()
{
    int number,i,result;
    printf("Enter a number: ");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        result = number%i;

        if(result==0)
        {
            printf("%d\n",i);
        }
        
    }

    return 0;

}