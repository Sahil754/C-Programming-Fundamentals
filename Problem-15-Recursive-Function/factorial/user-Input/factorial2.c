//Factorial program practice

#include<stdio.h>

int f(int n);

int main(){
	int n;
	printf("Calculate the factorial of: ");
	scanf("%d",&n);

	printf("Factorial of %d is %d: ",n, f(n));
}

int f(int n){
	if(n==1)
	   return 1;
	else
	   return n * f(n-1);
}
