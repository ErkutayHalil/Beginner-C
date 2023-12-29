#include <stdio.h>
#include <string.h>
int main()
{
    char fromwhere[30]="How are you?";
    char towhere[30]="";

    strncpy(towhere,fromwhere,7);
    printf("%s",towhere);

    return 0;

}
