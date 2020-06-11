#include<stdio.h>
void main(){
    int origianlInput;
    printf("Enter a number\n");
    scanf("%d",&origianlInput);
    int sum=0;
    int temp=origianlInput;

    while (temp !=0)
    {
        int unitsPlace = temp%10;
        sum=sum+unitsPlace*unitsPlace*unitsPlace;
        temp=temp/10;
    }
    if(sum==origianlInput){
        printf("%d is an armstrong number \n",origianlInput);
    }else
    {
        printf("%d is not an armstrong number \n", origianlInput);
    }
    
}