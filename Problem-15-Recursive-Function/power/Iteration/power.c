//This program calculates m^n through iteration approach (with User Input).

#include<stdio.h>

int power(int n1, int n2);

int main(){
	
	int base, exp, result;
	
	printf("Please enter base: ");
	scanf("%d",&base);

	printf("Please enter exponent: ");
	scanf("%d",&exp);

	result = power(base,exp);

	printf("%d to the power of %d is equal to: %d",base,exp,result);

	printf("\n(%d^%d=%d) ",base,exp,result);
}

int power(int n1, int n2){
	int i,result=1;

	for(i=1;i<=n2;i++){
	result = result*n1;
	}
	return result;	
}

