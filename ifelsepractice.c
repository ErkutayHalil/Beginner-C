#include <stdio.h>
int main()
{
    float exam1,exam2,exam3,project,average;

    printf("Enter the first exam grade: ");
    scanf("%f",&exam1);

    printf("Enter the second exam grade: ");
    scanf("%f",&exam2);

    printf("Enter the third exam grade: ");
    scanf("%f",&exam3);

    printf("Enter the project grade: ");
    scanf("%f",&project);

    average = (exam1 + exam2 + exam3 + project)/4;

    printf("Avarage: %f",average);
    printf("\n\n");

    if(average < 50)
    {
        printf("FF");
    }

    if(average >= 50 && average < 60)
    {
        printf("DD");
    }

    if(average >= 60 && average < 70)
    {
        printf("CC");
    }

    if(average >= 70 && average < 85)
    {
        printf("BB");
    }

    if(average > 85)
    {
        printf("AA");
    }

    return 0;






}