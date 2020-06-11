//This program gets number from user and lets the user know if it's even type or odd type.


#include<stdio.h>

int isEven(int num);

int main(){
	
	int n;

	printf("Please enter a number: ");
	scanf("%d",&n);

	printf("%d is of type %d",n,isEven(n));
	return 0;

}

int isEven(int num){
	return (num%2 == 0) ? 1 : 0;		
}
