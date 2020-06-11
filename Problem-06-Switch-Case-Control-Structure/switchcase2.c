//This is another example of switch-case control structure

#include<stdio.h>

int main() {
		int x;
		printf("Please enter the value of x: ");
		scanf("%d",&x);

		switch(x%2) {
			case 0:
				printf("x is divisible by 2");
			break;
			case 1: 
				printf("x is not divisible by 2");
			break;
			default:
				printf("I don't know the output");
		}
		printf("\n");
		return 0;
}
				
