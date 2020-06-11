//This program prints out Fibonacci series from 1 to N, where N is received as input.


#include<stdio.h>

int main(){
	
	int n,i,a=0,b=1,c;

	printf("Please enter limit for Fibonacci series: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		printf("%d \n",a);
		c=a+b;
		a=b;
		b=c;	
	}

}
