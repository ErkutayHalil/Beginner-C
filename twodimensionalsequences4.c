#include <stdio.h>
int main()
{
    int row,column,i,j,k,l;

    printf("Enter the value of the row: ");
    scanf("%d",&row);

    printf("Enter the value of the column: ");
    scanf("%d",&column);

    int matrix [row][column];

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\nYour value is [%d][%d] ===>",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\nThe matrix is:\n");
    for(k=0;k<row;k++)
    {
        for(l=0;l<column;l++)
        {
            printf("%d ",matrix[k][l]);
        }
        printf("\n");
    }

}