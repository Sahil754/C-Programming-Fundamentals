//This program prints numbers 0 to 9 using a for loop

//Preprocessors
#include<stdio.h>

//Global variables (Optional)

//Main function
int main() {
        int i;

        for(i=0;i<10;i++)
        {
            printf("The value of i is %d \n",i);
        }


    //User defined functions (Optional)

    //Gap
    printf("\n");

    //This program prints numbers from 0 to 9 using a while loop
    i=0;
    while(i<10) {
        printf("The value of i is %d \n",i);
        i++;
    }

    //Gap
    printf("\n");

    //This program prints out numbers from 1 to 5 using a do while loop
    i=1;
    do
    {
        printf("The value of i is %d \n",i);
        i++;
    } while(i<=5 && i>=2);
    return 0;
}