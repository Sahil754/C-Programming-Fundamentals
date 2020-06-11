/*This program converts given Celcius to Fahrenheit (Temprature)
Discovered formula: F=9/5(C)+32*/

#include<stdio.h>

float celtofah(int c);

int main(){
    
    /*NOTE: Testing:
    int c;
    c = 10/2;
    printf("10/2 is:%d",c);*/
    int c;

    printf("Please enter Celcius value: ");
    scanf("%d",&c);

    printf("The Celcius value given: %d \n \n The converted Fahrenheit value: %d",c,celtofah(c));

    return 0;
}
// Discovered formula: F=9/5(C)+32*/
float celtofah(int c){
    /* int F,part;    
   part = 9/5;
   F = part*c +32;*/
    
    float F;    
    F = ((float)9/5*c) + 32;
    return F;
}