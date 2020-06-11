//Documentation
//This is a program to determine if the number entered by user is even or odd.

//Preprocessors
#include<stdio.h>

//Global variables (Optional)

//Main Function

int main()
{
	int num;
	printf("\n Please enter a number to determien if it's even or odd: ");
	scanf("%d",&num);
	
	if((num%2==0))
	{
		printf("\n The number %d you enetered is even \n",num);
	}

	else
	{
		printf("\n The number %d you entered is odd \n",num);
	}
	return 0;
}

//User Defined Funcitons (Optional)
