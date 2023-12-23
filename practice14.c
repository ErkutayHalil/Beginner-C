#include <stdio.h>
int main()
{
    int number,i,a,b,c;

    for(i=1;i<=999;i++)
    {
        a = i/100;
        b = (i/10) % 10;
        c = i%10;
        number = a*a*a + b*b*b + c*c*c;
        if(i==number)
        {
            printf("%d\n",number);
        }
    }

    return 0;

}