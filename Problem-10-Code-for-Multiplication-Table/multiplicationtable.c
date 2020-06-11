//Program to output multiplication table of givne number by user

#include<stdio.h>

int main()
{
    int n;
    int i;
    
    printf("Please enter a number: ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",n,i,(n*i));
    }
}