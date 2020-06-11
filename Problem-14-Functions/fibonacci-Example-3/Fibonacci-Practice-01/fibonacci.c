//This program calculates fibonacci series given n input

#include<stdio.h>

int fibonacci(int a, int b, int n);

int main(){

	int a,b,c,n;
	
	printf("Please enter first number in the fibonacci series: ");
	scanf("%d",&a);

	printf("Please enter second number in the fibonacci series: ");                                                                                                         scanf("%d",&b);

	printf("Please enter first n number in the fibonacci series you'd like to know: ");                                                                                     scanf("%d",&n);

	printf("The first %d numbers in the fibonacci series are: %d",n,fibonacci(a,b,n));
	
	return 0;
}

/*Please enter first number in the fibonacci series: 0                                                                                                                    Please enter second number in the fibonacci series: 1                                                                                                                   Please enter first n number in the fibonacci series you'd like to know: 4 
 *
 * Output: 0112The first 4 numbers in the fibonacci series are: 5 
 * */


int fibonacci(int a, int b, int n){
	
	int i,c;
	
	//int fib = 

	for(i=1;i<=n;i++){
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
}
