#include <stdio.h>
int main()
{
    int winter,spring,summer,autumn,year;

    winter = 320;
    spring = winter / 4;
    summer = 8 * spring;
    autumn = summer / 10;
    year = winter + spring + summer + autumn;

    printf("Number of people coming to the hotel during 1 year: %d",year);

    
}