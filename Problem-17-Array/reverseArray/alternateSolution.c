//Program reverses the elements in the array.

#include<stdio.h>

int main() {
  int arr[10] = {4,6,7,1,2,3,9,8,5,58};
  int front,rear,temp;
  front = 0;
  rear = 9;
  
  while(front < rear) {
      temp = arr[front];
      arr[front] = arr[rear];
      arr[rear] = temp;
      
      front++;
      rear--;
    }
    
    int i=0;
    for(i=0;i<10;i++){
        printf("\n %d ",arr[i]);
      }
      
          printf("\n");
              
  return 0;
}
