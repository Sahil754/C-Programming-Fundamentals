//Program reverses elements of the array.

#include<stdio.h>

int main(){

	int arr[10];
	int i = 0;
	for(i=0;i<10;i++){
		printf("Enter element of array at position %d : ",i);
		scanf("%d",&arr[i]);
	}

	printf("\n Printing array in reverse order");

	for(int i=10;i>0;i--){
		printf("\n %d",arr[i]);
	}
	

	return 0;
}
