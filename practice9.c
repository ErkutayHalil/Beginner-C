#include <stdio.h>
int main()
{
    int number,cube;

    printf("Enter the number: ");
    scanf("%d",&number);

    cube = number*number*number;
    printf("Cube of the number is: %d",cube);

    return 0;
}