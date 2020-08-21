//Program prints min and max element in an array.

#include<stdio.h>

int main(){
	
	int size, i, min, max;

	printf("\n Please enter the size of an array: ");
	scanf("%d",&size);

	int arr[size];

	for(i=0;i<size;i++){

		printf("\n Please enter element at position %d: ",i); 
		scanf("%d", &arr[i]);

	}

	min = max = arr[0];

	for(i=1;i<size;i++){
	
		if(arr[i]<min){
			min = arr[i];
		}

		if(arr[i]>max){
			max = arr[i];
		}	
	}
	
	printf("\n The element with the minimum value in the array is: %d \n \n The element with the maximum value in the array is: %d \n",min,max);
	
	
	/*
	//Code to print out an array with values
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}*/


	return 0;
}
