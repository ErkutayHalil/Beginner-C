#include <stdio.h>
int main()
{
    int i,sequence[5];

    printf("Enter the first sequence value: ");
    scanf("%d",&sequence[0]);
    for(i=0;i<=5;i++)
    {
        sequence[i+1]=sequence[i]*3;
        printf("%d\n",sequence[i]);
    }

    return 0;

}