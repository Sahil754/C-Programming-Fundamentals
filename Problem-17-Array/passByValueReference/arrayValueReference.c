//Example for pass by value and pass by reference

#include <stdio.h>

void func1(int val); //Pass by value
void func2(int *ref, int size); //Pass by reference

int main(){
	int arr[5] = {2,3,4,5,6};

	func1(arr[3]);
	printf("\n");
	func2(arr,5);
	printf("\n");
}
void func1(int val){
//Prints what has been received

	printf("Received value is %d ", val);
}


void func2(int *ref, int size){
	int i=0;
	for(i=0;i<size;i++){
		printf("%d ",*(ref + i));
	}
}


