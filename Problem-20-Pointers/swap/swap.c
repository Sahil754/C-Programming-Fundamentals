// Program to swap two numbers, using pass by reference.

#include <stdio.h>

void swap(int *p1, int *p2);
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    
    swap(&a,&b);
    
    printf("The value of a is %d \n The value of b is %d \n",a,b);
    
    return 0;
}

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
