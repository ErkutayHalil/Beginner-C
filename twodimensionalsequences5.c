#include <stdio.h>
int main()
{
    int m1[2][2]={8,13,51,24};
    int m2[2][2]={42,7,36,15};
    int sum[2][2];

    int i,j,k,l;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]= m1[i][j] + m2[i][j];
        }
    }
    for(k=0;k<2;k++)
    {
        for(l=0;l<2;l++)
        {
            printf("%d ",sum[k][l]);
        }
        printf("\n");
    }
    
}