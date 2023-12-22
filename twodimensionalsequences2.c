#include <stdio.h>
int main()
{
    int sequence[2][2];

    sequence[0][0]=10;
    sequence[0][1]=20;
    sequence[1][0]=30;
    sequence[1][1]=40;

    printf("The value of this matrix is:\n\n");

    printf("%d\t",sequence[0][0]);
    printf("%d\n",sequence[0][1]);
    printf("%d\t",sequence[1][0]);
    printf("%d\n",sequence[1][1]);

    return 0;
}



