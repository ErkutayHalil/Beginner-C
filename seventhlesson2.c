#include <stdio.h>
int main()
{
    //%c tek karakter varken kullanılmalı
    char myCity[10]="Van";
    printf("My city is: %s\n",myCity);
    printf("My city is: %c\n",myCity);
    
    return 0;
}