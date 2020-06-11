//This program prints out reverse numbers

#include<stdio.h>

void reverse(int n);

int main(){
    
    int n;
    printf("Please enter number to receive reversed numbers: ");
    scanf("%d",&n);

    reverse(n);

    return 0;
}

void reverse(int n){
        
        int i,number,last,remaining,second;
        
        for (i=1; i <= n; i++)
        {
            number = n;
            last = (number%10);
            remaining = (number/10);
            second = (remaining%10);
            printf("%d %d",last,second);
        }
        
}