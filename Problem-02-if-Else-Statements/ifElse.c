//This Program checks if the number is greater than zero or not

#include<stdio.h>

int main()
{
    int a;
    printf("\n Please enter a number: ");
    scanf("%d",&a);

    if(a>0)
    {
        printf("\n The number %d is postive.",a);
    }

    else
    {
            printf("\n The number %d is negative.",a);
    }
    printf("\n");
    
    return 0;

}