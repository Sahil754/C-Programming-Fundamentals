#include<stdio.h>

int main()
{
    int num, count = 1, rem, sum;

    while(count <= 500)
    {
        num = count;
        sum = 0;

        while (num) //num ! = 0 , 0 = false,when num=0 exit, Anything that is not equal to zero is evaluated to true, keep going
        {
            rem = num % 10;
            sum = sum + (rem * rem * rem);
            num = num / 10;
        }
            //while condition c no operator
        if (count == sum)
        {
            printf("%d is an armstrong number\n",count);
        }
        
        count++;
    }
    
    return 0;
}