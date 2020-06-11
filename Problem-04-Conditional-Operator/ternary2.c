//This program is an example of a conditional or ternary operator, to determine if the number entered is even or odd

#include<stdio.h>

int main()
{
	int num;

	printf("Please enter a number: ");
	scanf("%d",&num);

	((num%2)==0)?printf("\n %d is Even",num):printf("\n %d is Odd",num);

	printf("\n");
	return 0;
}
