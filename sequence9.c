#include <stdio.h>
int main()
{
    int sequence[100];
    int number;
    int i;
    
    printf("How many numbers will you enter: ");
    scanf("%d",&number);

    for(i=0;i<number;i++)
    {
        printf("Enter the %d. number of the sequence: ",i+1);
        scanf("%d",&sequence[i]);
    }
    printf("\n\n");

    return 0;

}