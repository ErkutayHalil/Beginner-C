#include <stdio.h>
int main()
{
    int i,number=0;
    float avarage,sum=0,num[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d. number: ",i+1);
        scanf("%f",&num[i]);
        if(num[i]>0)
        {
            number++;
            sum = sum + num[i];
        }
    }
    avarage = sum/number;
    printf("\nThe avarage is: %.3f",avarage);

    return 0;

}