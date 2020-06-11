/*This program converts given Celcius to Fahrenheit (Temprature)
Discovered formula: F=9/5(C)+32*/

#include<stdio.h>

float celtofah(float c);

int main(){
    
    /*NOTE: Testing:
    int c;
    c = 10/2;
    printf("10/2 is:%d",c);*/
    float c;

    printf("Please enter Celcius value: ");
    scanf("%f",&c);

    printf("The Celcius value given: %0.0f \n \n The converted Fahrenheit value: %0.2f",c,celtofah(c));

    return 0;
}
// Discovered formula: F=9/5(C)+32*/
float celtofah(float c){
    /* int F,part;    
   part = 9/5;
   F = part*c +32;*/
    
    //float F,part;    
    float F;    
    //part = (9/5)*c;
    //part = c;
    F = (1.8*c) + 32;
    return F;
}