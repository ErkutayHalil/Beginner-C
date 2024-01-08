#include <stdio.h>
int main()
{
    int i=1,ending,sum=0;
    printf("Enter the last number of the sum: ");
    scanf("%d",&ending);

    do
    {
        sum = sum + i;
        i++;   
    } while(i<=ending);
    printf("\nSum of the numbers: %d",sum);

    return 0;
    
}