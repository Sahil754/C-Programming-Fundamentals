//This program prints out the reversed number from the original number the user entered.

#include<stdio.h>

int reverse(int number){
	int ans=0;
	while(number !=0){
		int units = number % 10;
		ans = ans*10+units;
		number = number/10;
	}

	return ans;

}

int main(){
	
	int a[] = {234, 567, 11, 985, 568, 235, 456};
	int size=7;
	int i=0;
	for(i=0;i<7;i++){
		int rev;
		rev=reverse(a[i]);
		printf("Original number: %d Reversed Number %d \n",a[i],rev);
	}


	return 0;
}
