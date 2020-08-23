//Program reverses array elements

#include<stdio.h>

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int front,back,temp,i;

	front =0;
	back=9;

	while(front < back){
		temp = arr[back];
		arr[back]=arr[front];
		arr[front]=temp;

		front++;
		back--;

	}
	
	for(i=0;i<10;i++){
		printf("%d",arr[i]);
	}

	return 0;
}
