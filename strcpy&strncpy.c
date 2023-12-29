#include <stdio.h>
#include <string.h>
int main()
{
    char source[30]="How are you?";
    char copy[30]="";

    strcpy(copy,source);
    printf("%s",copy);

    return 0;

}
