#include <stdio.h>
int main()
{
    int sequence[4],*ptr,n;
    ptr = sequence;
    for(n=0;n<4;n++)
    {
        printf("Enter the number: ");
        scanf("%d",&*(ptr+n));
    }
    printf("Which value do you want to print: ");
    scanf("%d",&n);
    printf("%d\n",*(ptr+n-1));
}