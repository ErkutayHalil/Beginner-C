#include <stdio.h>
int main()
{
    int stu[5],i,j;
    for(i=0;i<=4;i++)
    {
        printf("Enter the %d. grade: ",i+1);
        scanf("%d",&stu[i]);
    }
    printf("Which grade do you want to see: ");
    scanf("%d",&j);
    printf("%d. grade is: %d",j,stu[j-1]);
    
}