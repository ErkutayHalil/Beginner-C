#include <stdio.h>
#include <stdlib.h>

    struct info
    {
        char name[20];
        int no;
        int class;
        float avarage;
    };
        struct info std;

    int main()
    {
        printf("Enter the name of the student: ");
        scanf("%s",std.name);
        printf("Enter the id no of the student: ");
        scanf("%d",&std.no);
        printf("Enter the class of the student: ");
        scanf("%d",&std.class);
        printf("Enter the exam avarage of the student: ");
        scanf("%f",&std.avarage);

        printf("\n\n");

        printf("%s\n",std.name);
        printf("%d\n",std.no);
        printf("%d\n",std.class);
        printf("%f\n",std.avarage);

        return 0;

    }