//This program will cacluate m^n through user input.

#include<stdio.h>

int power(int n1, int n2);

int main(){
	int base,exp,result;

	printf("Please enter base: ");
	scanf("%d",&base);

	printf("Please enter exponent: ");
	scanf("%d",&exp);

	result = power(base,exp);

	printf("%d raised to the power of %d = %d",base, exp,result);

	return 0;
}

int power(int n1, int n2){

	if(n2==0){
		return 1;	
	}
	else{
		return n1 * power(n1,n2-1);
	}
}
