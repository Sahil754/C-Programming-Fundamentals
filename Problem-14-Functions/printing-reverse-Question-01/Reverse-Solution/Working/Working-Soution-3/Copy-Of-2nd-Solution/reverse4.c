#include<stdio.h>

int reverse(int num)

{

	int rev_num=0; // So it does not give garbage value when multiplied with 10 for first time.

	while(num>0)

	{

		rev_num=rev_num*10+num%10;

		num=num/10;

	}

	return rev_num;

}

void main()

{

	int num;

	printf("Enter a number:\n");

	scanf("%d",&num);

	printf("Original number is: %d",num);

	printf("Reverse number is:%d", reverse(num));
}
