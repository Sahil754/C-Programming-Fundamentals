//This program calculates area of a circle using Preprocessor defined constant
//A=PI*radius*radius

#include<stdio.h>
#define PI 3.14

int main(){
	int radius;
	float area;

	printf("Please enter radius: ");
	scanf("%d",&radius);
	area = PI*radius*radius;
	printf("\nThe area of a circle with radius %d is: %f",radius,area);


	return 0;
}
