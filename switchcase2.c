#include <stdio.h>
int main()
{
    char lesson;
    printf("Enter the first letter of the lesson: ");
    scanf("%s",&lesson);
    printf("\n\n");

    switch(lesson)
    {
        case 'M':printf("Math"); 
        break;
        case 'P':printf("Physics");
        break;
        case 'B':printf("Biology"); 
        break;
        case 'C':printf("Chemistry"); 
        break;
        case 'E':printf("English"); 
        break;
        
        default: printf("The letter you entered is incorrect or it is lowercase.");

    }

    return 0;



}