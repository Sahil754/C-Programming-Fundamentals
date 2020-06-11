//This program is an example of goto(label) statement 

#include <stdio.h>

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i==4)
		{
			printf("\n Goto statement when i=4");
			goto Label;
		}
		printf("%d",i);
	}
	Label: printf("\n Value of i is 4");
}
