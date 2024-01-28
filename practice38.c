/*Make a sequence which is includes 10 values. 
Then find sum of the biggest and smallest numbers of this sequence.*/
#include <stdio.h>
int main()
{
    int seq[10],sum=0,*big,*sma,i;     
    for(i=0;i<10;i++)
    {
        printf("Enter the %d. value of the sequence: ",i+1);
        scanf("%d",&seq[i]);
    }
    big=&seq[0];       
    sma=&seq[0];
    for(i=0;i<10;i++)
    {
        if(seq[i]>*big)     
        {
            big=&seq[i];
        }
        else if(seq[i]<*sma)    
        {
            sma=&seq[i];
        }
    }
    sum = *big + *sma;      
    printf("Sum of the biggest and smallest value= %d",sum);

}