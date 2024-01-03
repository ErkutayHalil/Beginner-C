#include <stdio.h>
int main()
{
    int number = 35;
    int *n = &number;

    //Writes the number
    printf("Number: %d\n",number);

    //Writes the address
    printf("Address: %x",n);
    printf("\n\n----------\n\n");

    char letter = 'f';
    char *l = &letter;

    //Writes the letter
    printf("Letter: %c\n",letter);

    //Writes the address
    printf("Address: %x",l);

    return 0;

}