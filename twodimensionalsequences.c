#include <stdio.h>
int main()
{
    int sequence[2][2];

    sequence[0][0]=10;
    sequence[0][1]=20;
    sequence[1][0]=30;
    sequence[1][1]=40;

    printf("The value of 0-0 in this matrix is: %d\n",sequence[0][0]);
    printf("The value of 0-1 in this matrix is: %d\n",sequence[0][1]);
    printf("The value of 1-0 in this matrix is: %d\n",sequence[1][0]);
    printf("The value of 1-1 in this matrix is: %d\n",sequence[1][1]);

    return 0;
}



