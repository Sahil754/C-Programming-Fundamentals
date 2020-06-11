//This program prints out first n given fibonacci numbers

#include<stdio.h>

void fibonacci(int n);

int main(){
	
	int n;

	printf("Please enter the first nth fibonacci numbers that you would like to see printed out: ");
	scanf("%d",&n);

	fibonacci(n);
	//printf("%n");

	return 0;
}

void fibonacci(int n){
	
	int first,second,i,third;
	
	first = 0;
	second =1;
	
	
	if(n>=1){
		printf("%d",first);
	}

	if(n>=2){
		printf("%d",second);	
	}

	if(n>2){
		for(i=3;i<=n;i++){
			third = first + second;
		        printf("%d",third);
			first = second;
			second = third;
		}	
		
	}
}
