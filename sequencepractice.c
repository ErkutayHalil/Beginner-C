#include <stdio.h>
int main()
{
    int grade1[5][2];
    int i,j,sum;
    double average;
   
    for(i=0;i<5;++i)
    {
        printf("%d. student grades: ",i+1);
        for(j=0;j<2;++j)
        {
            scanf("%d",&grade1[i][j]);
        }
    }
    
    for(j=0;j<2;++j)
    {
        sum = 0;
        for(i=0;i<5;++i)
        
            sum+= grade1[i][j];
            average = sum/5.0;
            printf("%d. average: %5.2f\n",j+1,average);
        
    }
    

}