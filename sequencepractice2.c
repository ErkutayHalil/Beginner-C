#include <stdio.h>
int main()
{
    char word1[20];
    int i;

    printf("Enter a string word: ");
    scanf("%s",word1);
    printf("\nThe word you entered: %s\n",word1);
    printf("Writing letter by letter: \n");

    for(i=0;word1[i] !='\0';i++)
    {
        printf("%c\n",word1[i]);
    }
    printf("\n\n");
}