#include <stdio.h>
int main()
{
    int i,a,b,c,d,sum;

    for(i=1;i<=9999;i++)
    {
        a = i/1000;
        b = (i/100)%10;
        c = (i%100)/10;
        d = i%10;
        sum = a+c+d;

        if(b==sum)
        {
            printf("%d\n",i);
        }
    }

    return 0;

}