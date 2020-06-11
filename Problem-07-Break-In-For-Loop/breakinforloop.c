//Break in for loop example program

#include <stdio.h>

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			printf("\n Coming out of the loop when i = 5");
			break;
		}
	printf("%d",i);
	}
	printf("\n Now outside of for loop due to break-when i is 5");
}
