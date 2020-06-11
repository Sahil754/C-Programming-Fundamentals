//This program is a recusrive function that calculates the power of 2


#include<stdio.h>

int power(int num);

int main(){
	int num;

	printf("Please enter nth power of 2 to be calculated: ");
	scanf("%d",&num);

	printf("2 to the power of %d is %d",num,power(num));
	return 0;
}

int power(int num){
	
	int y;

	if(num==0){
		return 1;
	}
	
	else{
		y=2 * power(num-1);
		return y;
	}
}
