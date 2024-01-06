#include <stdio.h>
int main()
{
    int sequence,i,*ptr;
    ptr=&sequence;

    printf("Please don't write 'zero'\n\n");

    for(i=0;i<=9;i++)
    {
        printf("Number: ");
        scanf("%d",&*(ptr+i));
    }
    printf("\n\nPositive Numbers\n");
    for(i=0;i<=9;i++)
    {
        if(*(ptr+i)>0)
        {
            printf("%d\n",*(ptr+i));
        }
    }
    printf("\n\nNegative Numbers\n");
    for(i=0;i<=9;i++)
    {
        if(*(ptr+i)<0)
        {
            printf("%d\n",*(ptr+i));
        }
    }
    

}