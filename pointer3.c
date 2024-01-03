#include <stdio.h>
int main()
{
    char harf = 'm';
    char *pt = &harf;

    printf("Address1: %x\n",pt);

    pt++;

    printf("Address2: %x\n",pt);

    pt--;

    printf("Address3: %x\n",pt);

    pt = pt + 9;

    printf("Address4: %x\n",pt);

    return 0;

}