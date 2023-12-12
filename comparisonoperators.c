#include <stdio.h>
int main()
{
    int x,y;
    x=23;
    y=141;
    printf("result x=y: %d\n",x==y);
    printf("result x=y: %d\n",x!=y);
    printf("result x>y: %d\n",x>y);
    printf("result x<y: %d\n",x<y);
    return 0;

//the first result is 0. So it is a wrong answer.Because we used 'the equal to operator' and x and y are not the same number.

//the second result is 1. So it is the correct answer. Because we used 'the not equal to operator' and x and y are not the same number.

//the third result is 0. So it is a wrong answer. Because x is less than y.

//the forth result is 1. So it is the correct answer. Because x is less than y. 

}