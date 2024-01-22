#include <stdio.h>
int main()
{
    /*You choose a word and a letter.
    This code finds how many letters you choose are in this word.*/
    int i, a=0;
    char sequence[10],searching;
    printf("Enter a word: ");
    gets(sequence);
    printf("Which letter are you looking for: ");
    scanf("%c",&searching);
    for(i=0;i<=9;i++)
    {
        if(sequence[i]==searching) a++;
    }
    printf("\nThere are %d %c's in this word.\n",a,searching);
}