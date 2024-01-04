#include <stdio.h>
int main()
{
    float exam1,exam2,exam3,avarage;
    printf("Enter the first exam score: ");
    scanf("%f",&exam1);
    printf("\n");

    printf("Enter the second exam score: ");
    scanf("%f",&exam2);
    printf("\n");

    printf("Enter the third exam score: ");
    scanf("%f",&exam3);
    printf("\n");

    avarage = (exam1 * 0.4 + exam2 * 0.5 + exam3 * 0.1);

    if(avarage>=50)
    {
        printf("Congratulations you passed. ");
    }
    else
    {
        printf("You have to study harder! ");
    }

    return 0;

}