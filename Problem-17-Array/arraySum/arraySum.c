//Prints sum of all elements in an array.

#include<stdio.h>

int main() {
	
	int arr[4] = {1,2,3,4};
	int i, sum=0;
	
	printf("Elements in the array are: ");

	for(i=0;i<4;i++){
		
		printf("%d ",arr[i]);
		sum += arr[i];	
	}

	printf("\nThe sum of the elements in the array is: %d\n",sum);

	return 0;
}
