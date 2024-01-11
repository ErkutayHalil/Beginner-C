#include <stdio.h>
int main()
{
    int a=4,b=7;
    int *pa,*pb;
    printf("a=%d,b=%d\n",a,b);
    pa=&a;
    pb=&b;
    *pa=*pa + 10;
    *pb=*pb + 15;
    printf("After the operations a=%d,b=%d\n",a,b);
    printf("*pa=%d,*pb=%d\n",*pa,*pb);
    a=19;
    printf("a=%d,b=%d\n",a,b);
    *pa=20;
    printf("*pa=%d,*pb=%d",*pa,b);

}