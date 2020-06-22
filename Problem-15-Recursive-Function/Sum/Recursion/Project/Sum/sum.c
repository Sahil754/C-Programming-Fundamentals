//Sum program using Recursive

#include<stdio.h>

int sum(int n);

/*int main(){
	int number = 345, total;
	total = sum(number);

	printf("The sum of the digits of %d is %d",number,total);

	return 0;
}*/

int sum(int n){
	int remainder, div;

	if(n==0){
	  return 0;
	}
	else{
		remainder=n%10;
		div=n/10;

		return remainder + sum(div);
	}

}
