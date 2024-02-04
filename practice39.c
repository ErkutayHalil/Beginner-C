//How to create a grading system?
#include <stdio.h>
int main()
{
    int grade[30][2];
    int i,j;
    int sum;
    float stavarage,avarage;
    for(i=0;i<30;i++)
    {
        printf("The grade of the student number %d is: ",i+1);
        for(j=0;j<2;j++)
        {
            scanf("%d",&grade[i][j]);
        }
    }
    printf("\n");

    for(i=0;i<30;i++)
    {
        sum = 0;
        for(j=0;j<2;j++)
        {
            sum += grade[i][j];
        }
        stavarage = sum/2;
        if(stavarage>=88)
        {
            printf("%d. student gets AA\n",i+1);
        } 
        else if(stavarage<88 && stavarage>=76)
        {
            printf("%d. student gets BA\n",i+1);
        } 
        else if(stavarage<76 && stavarage>=70)
        {
            printf("%d. student gets BB\n",i+1);
        } 
        else if(stavarage<70 && stavarage>=64)
        {
            printf("%d. student gets CB\n",i+1);
        } 
        else if(stavarage<64 && stavarage>=58)
        {
            printf("%d. student gets CC\n",i+1);
        } 
        else if(stavarage<58 && stavarage>=52)
        {
            printf("%d. student gets DC\n",i+1);
        } 
        else if(stavarage<52 && stavarage>=46)
        {
            printf("%d. student gets DD\n",i+1);
        } 
        else if(stavarage<46 && stavarage>=40)
        {
            printf("%d. student gets FD\n",i+1);
        } 
        else if(stavarage<40 && stavarage>=34)
        {
            printf("%d. student gets FF\n",i+1);
        } 
    }
    printf("\n\n");
    for(j=0;j<2;j++)
    {
        avarage = 0;
        for(i=0;i<30;i++)
        {
            avarage += grade[i][j];
        }
        avarage = avarage/30;
        for(i=0;i<30;i++)
        {
            printf("The %d. exam avarage is %.3f\n",j+1,avarage);
            if(grade[i][j]>avarage || grade[i][j]>=46)
            {
                printf("%d. students %d. exam is succeed\n",i+1,j+1);
            }
            else if(grade[i][j]<avarage || grade[i][j]<46)
            {
                printf("%d. students %d. exam is not succeed\n",i+1,j+1);
            }
        }
        
    }

    return 0;

}