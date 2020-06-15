//This program outputs the result of the calclualted factorial required by the user

 #include<stdio.h>

 int f (int n);

 int main(){
 	int number = 3;
	int factorial = f(number);
	printf("Factorial of %d is %d", number, factorial);
	return 0;
 }

 int f (int n){
 	if(n<=1)
	   return 1;
	else
	   return n * f(n-1);
 }
