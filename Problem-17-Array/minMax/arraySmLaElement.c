//Program to print the smallest and largest element in an array.

#include<stdio.h>

int main() {
	
	int arr[10];
	int i;
	int min,max;

	for(i=0;i<10;i++){
		printf("Enter value at position %d: ",i);
		scanf("%d",&arr[i]);	
	}

	
	min = arr[0];
	for(i=1;i<10;i++){
		if(arr[i]< min){
			min = arr[i];
		}		
	}
	
	max = arr[0];

	for(i=1;i<10;i++){
		if(arr[i]> max){
			max =arr[i];
		}
	}
	
	printf("\n Min element in the array is: %d , Max element in the array is: %d",min,max);

	
	/*  //Code for how to normally output an array that has elements inside it already (whether obtained by user input or hard coded)
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}*/

	return 0;
}
