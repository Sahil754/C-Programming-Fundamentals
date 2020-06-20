//This program calculates sum of the digits of a given number
//354 should result in 3+4+5=12

#include<stdio.h>

int sumIteration(int n);

int main(){
	int num,sumOfDigits;
	
	printf("Please enter a number: ");
	scanf("%d",&num);

	sumOfDigits = sumIteration(num);

	printf("The sum of the digits of %d is: %d",num,sumOfDigits);
}

int sumIteration(int n){
	int remainder = 0, div =0, sumOfDigits = 0;

	while(n>0){
	remainder=n%10;
	div=n/10;
	sumOfDigits= sumOfDigits + remainder;
	n = div;
	}

	return sumOfDigits;
}
