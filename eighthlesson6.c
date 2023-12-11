#include <stdio.h>
int main()
{
    int x,y,z;
    x=5;
    y=2;
    z=9;
    x++;
    ++y;
    z--;
    x=y++;
    x=++y;
    z=y--;
    z=--y;
    printf("x:%d\n",x);
    printf("y:%d\n",y);
    printf("z:%d\n",z);

    return 0;
}