#include <stdio.h>
int main()
{
    int i;
    float avarage,sum=0.0,num[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the %d. number: ",i+1);
        scanf("%f",&num[i]);
        sum = sum + num[i];
    }
    avarage = sum/10;
    printf("The avarage is: %.3f",avarage);

    return 0;
}