#include <stdio.h>
int main()
{
    char country[20];
    int i;
    
    for(i=0;i<3;i++)
    {
        printf("Enter a country: ");
        scanf("%s",country);
        printf("The country you entered is: %s", country);
        printf("\n\n");
    }

    return 0;

}