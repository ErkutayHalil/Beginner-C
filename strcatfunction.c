#include <stdio.h>
#include <string.h>
int main()
{
    char nameofthebook[30],writer[30],bookwriter[60];
    printf("Enter the name of the book and the writer: ");
    scanf("%s%s",nameofthebook,writer);

    strcat(bookwriter,nameofthebook);
    strcat(bookwriter," ");
    strcat(bookwriter,"---> ");
    strcat(bookwriter,writer);
    printf("\n\n");
    printf("%s",bookwriter);

    return 0;

}
