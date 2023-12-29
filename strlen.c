#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word[100];
    printf("Enter the word: "); 
    scanf("%s",word);  /*This code is counting the first 
                        word because of the scanf function*/

    printf("The length of the word : %d",strlen(word));
}








