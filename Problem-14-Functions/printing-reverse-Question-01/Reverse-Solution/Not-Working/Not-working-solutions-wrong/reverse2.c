//This program reveives a number from the user and prints it out in the reverse order

#include<stdio.h>

int reverse(int num){
	
	//int rem,rev=0,revfinal;
	int rem,rev=0;
	
	while(num){
		rem = num%10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	
	return rev;
}

int main(){
	
	//int num,ans;
	int num;
	
	printf("Please enter the number to be reversed: ");
	scanf("%d",&num);

	//ans = reverse(num);

	printf("The reversed number is: %d",reverse(num));
	
	return 0;
}

