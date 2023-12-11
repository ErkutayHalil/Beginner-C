#include <stdio.h>
int main()
{
    int Number;//'-' kullanılanlarda da aynı mantık işler;
    Number= 12;
    printf("%d\n",Number);
    printf("++Number:%d\n",++Number);
    printf("Number++:%d\n",Number++);
    printf("Number:%d\n",Number);

    return 0;
}