#include <stdio.h>
int main()
{
    int i,bacterium = 1;
    for(i=1;i<=24;i++)
    {
        bacterium = bacterium * 2;
    }
    printf("The last number of the bacteria: %d",bacterium);

    return 0;
}