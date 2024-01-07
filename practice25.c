#include <stdio.h>
int main()
{
    int number,day;
    printf("Enter the number of the day: ");
    scanf("%d",&number);
    day = number%7 - 1;

    switch(day)
    {
        case 0:printf("Monday"); 
        break;
        case 1:printf("Tuesday");
        break;
        case 2:printf("Wednesday"); 
        break;
        case 3:printf("Thursday"); 
        break;
        case 4:printf("Friday"); 
        break;
        case 5:printf("Saturday"); 
        break;
        case 6:printf("Sunday"); 
        break;
        
        default: printf("The number you entered is incorrect.");

    }

    return 0;



}