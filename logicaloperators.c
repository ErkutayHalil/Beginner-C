#include <stdio.h>
int main()
{
    int x;
    x=6;
    printf("result: %d\n",(x>5 && x<12) );
    // The result is 1. Because 1&1 is equal to 1.
    printf("result: %d\n",(x>7 && x<19) );
    // The result is 0. Because 0&1 is equal to 0.
    printf("result: %d\n",(x>8 || x<34) );
    // The result is 1. Because 0|1 is equal to 1.
    printf("result: %d\n",(x>13 || x<1) );
    // The result is 0. Because 0|0 is equal to 0.
    


    return 0;







}