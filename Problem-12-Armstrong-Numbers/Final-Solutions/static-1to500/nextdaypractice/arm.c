//Prints armstrong numbers from 1 to 500


#include <stdio.h>

int main(){
	
	int count=1, num, sum, res;

	while(count<=500){
		
		num = count;
		sum = 0;
		
		
		while(num){
			res = num%10; 
			sum = sum + (res*res*res);
			num = num/10;
		}

		if(count==sum){
			printf("This is an armstrong number: %d \n",count);	
		}
		count++;
	}
	return 0;
}
