#include <stdio.h>
int main()
{
    int pages = 1000,read=10,days=0;

    while(pages>=0)
    {
        pages=pages - read;
        read+=5;
        days+=1;
    }
    printf("The book finished on the %d. day.",days);

    return 0;
}