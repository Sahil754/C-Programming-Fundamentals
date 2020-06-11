//This program reveives a number from the user and prints it out in the reverse order

#include<stdio.h>
/* NOTE: You can pass string through a function
by using it's type being char*, however
in this not doing so, so can't pass on
strings like this, not sure how to do that
even if I did change it to char*, as 
didn't work when I tried it. As seen 
below*/
char* reverse(int num){
	
	int rem,rev=0,revfinal;
	
	while(num){
		rem = num%10;
		rev = rev * 10 + rem;
		num = num/10;
	}
	
	revfinal = printf("The reverse of the given number is:%d ",rev); 

	return (char*) revfinal;
}

int main(){
	int num;

	printf("Please enter the number to be reversed: ");
	scanf("%d",num);

	reverse(num);
	
	return 0;
}

