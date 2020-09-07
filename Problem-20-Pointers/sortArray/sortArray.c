//Program sorts an array

#include<stdio.h>

void swap(int *p,int x,int y);

int main(){
    int a[10];
    int i=0, j=0;

    for(i=0;i<10;i++){
        printf("Enter value of an array at position %d: ",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                swap(a,i,j);
            }
        }
    }
    printf("\nArray after sorting\n");
    
    	for(i=0;i<10;i++){
        	printf("\n%d",*(a+i));
   	}

    printf("\n");	
    return 0;
}

void swap(int *p, int x, int y){
    int temp = *(p+x);
    p[x] = p[y];
    *(p+y)=temp;
}

