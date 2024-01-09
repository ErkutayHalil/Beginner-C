#include <stdio.h>
int main()
{
    int x=1,ending,sumeven=0,sumodd=0;
    printf("Enter the last number: ");
    scanf("%d",&ending);
    while(x<=ending)
    {
        if(x%2==0)
        {
            sumeven = sumeven + x;
        }
        else 
        {
            sumodd = sumodd + x;
        }
        x++;
    }

    printf("\nResult even numbers= %d\n",sumeven);
    printf("\nResult odd numbers= %d\n",sumodd);

    return 0;

}