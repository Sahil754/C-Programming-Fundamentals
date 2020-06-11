//Program to find if number given is even or odd using function

#include<stdio.h>

int isEven(int num);

int main(){
    int n;

    printf("Please enter a number: ");
    scanf("%d",&n);

    printf("%d is of type %d \n \n",n,isEven(n));
    return 0;
}

int isEven(int num){
    return (num%2 == 0) ? 1 : 0;
}