//Example of multi dimentional array

#include<stdio.h>

int main() {
	
	int row = 3;
	int col = 2;
	int arr[row][col];
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("Enter the value at row %d, col %d: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

	for(i=0;i<row;i++){
		printf("\n");
		for(j=0;j<col;j++){
			printf("%d, ",arr[i][j]);	
		}
	}

	return 0;
}
