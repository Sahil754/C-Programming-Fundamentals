//This program calculates radius of circle using input parameter for the macro

#include<stdio.h>
#define PI 3.14
#define areaofcircle(x) ((PI)*(x)*(x))

int main(){

	int radius;
	float area;
	
	printf("\nPlease enter the radius of a circle: ");
	scanf("%d",&radius);
	
	area = areaofcircle(radius);
	//Or can write Area of circle with radius %d is %f to shorten it further
	printf("\nCircle with a radius of %d has an area of: %f \n",radius,area);
	
	return 0;
}
