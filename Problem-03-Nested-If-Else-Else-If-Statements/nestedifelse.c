//Documentation
//This problem determines if the number entered by the user is greater than 0, 
//divisble by 2, or neither?

#include<stdio.h>

int main()
{
    int num;

    printf("\n Please enter a number: ");
    scanf("%d",&num);

    if((num%2==0))
    {
        printf("\n The number %d you entered is divisible by 2",num);
    }

    else if(num>0)
    {
        printf("\n The number %d you enetered is greater than zero",num);
    }

    else
    {
        printf("\n The number %d you enetered is neigher divisible by 2 or greater than 0",num);
    }

    printf("\n");

    return 0;

}