#include <stdio.h>

    enum cities
    {
        wrong,berlin,paris,londra,amsterdam,suzuka,istanbul,baku
    };

    int main()
    {
        enum cities number;
        number = amsterdam;
        printf("%d",number);
    }