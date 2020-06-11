//This program checks if given number is even (returns 0) or odd (returns 1).


#include<stdio.h>

int isEven(int num);

int main(){
	
	int n;

	printf("Please enter number to determine if it's even(0) or odd(1): ");
	scanf("%d",&n);

	printf("\n %d is of type %d \n",n,isEven(n));
	return 0;	
}

int isEven(int num){
	return (num%2 ==0) ? 0 : 1; 
}
