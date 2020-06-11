//This program calculates simple interest

#include<stdio.h>

float simpleInterest(int p, int r, int t);

int main(){
	
	int p,r,t;

	printf("Please enter Principal: ");
	scanf("%d",&p);

	printf("Please enter Interest rate: ");                                                                                                                                 scanf("%d",&r);

 	printf("Please enter Time: ");                                                                                                                                          scanf("%d",&t); 

	printf("%f is the Simple Interest given your Principle: %d, Interest Rate: %d, and Time (in years): %d \n \n",simpleInterest(p,r,t),p,r,t);
	
	
	return 0;
}

float simpleInterest(int p, int r, int t){
	
	float interest = (float) (p*r*t)/(float)100;
	return interest;
}
