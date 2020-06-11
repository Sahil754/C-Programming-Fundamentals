//Documentation
//Program to find the factorial of a given number

//Preprocessors
#include <stdio.h>

//Global variables (optional)

//Main Function
int main()
{
    int n,i,fact;

    printf("Please enter the number to find it's factorial: ");
    scanf("%d",&n);
    
    fact=1;

    for(i=n;i>=1;i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %d",n,fact);

    return 0;
}
//User defined Funtions (Optional)