#include<stdio.h>

int main()
{
    int a = 9;
    printf("\n Please enter a number, thank you! :-D, Enter it here: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\n The number %d is positive.",a);
    }
    return 0;
}