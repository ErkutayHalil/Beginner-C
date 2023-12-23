#include <stdio.h>
int main()
{
    int i,a,b,c,counter=0;

    for(i=100;i<=999;i++)
    {
        a = i/100;
        b = (i/10) % 10;
        c = i%10;

        if(a!=b && b!=c && a!=c)
        {
            counter++;
        }
       
    }   
    printf("%d\n",counter);
}