#include <stdio.h>
int main()
{
    int a = 500, *b;
    b=&a;
    printf("a value = %d\n",a);
    printf("a value (with pointer)= %d\n", *b);
    printf("a value address (on a) = %X\n",a);
    printf("a value address (with pointer) = %X\n",*b);
    printf("Address of the pointer= %p\n", &b);
}