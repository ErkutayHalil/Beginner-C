#include <stdio.h>
int main() 
{
	int i=2;
	
	while(i>=1 && i<=20)
	{
		printf("%d\n",i);
		i+=2;
		if(i==14)
		{
			i=i+2;
		}
	}
	
	return 0;
}