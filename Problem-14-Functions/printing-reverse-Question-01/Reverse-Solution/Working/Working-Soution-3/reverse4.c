#include<stdio.h>

int reverse(int num)

{

	int rev_num=0, number; // So it does not give garbage value when multiplied with 10 for first time.
	/*NOTE: Below in the while loop condition
	you can also write just num, which
	would mean while(num!=0), or you can 
	also directly write num!=0 instead of
	num>0*/
	while(num>0)

	{
		number = num%10;
		rev_num=rev_num*10+number;
		num=num/10;
	}

	return rev_num;

}

void main()

{

	int num;

	printf(" Enter a number: ");
	scanf("%d",&num);

	printf("\n Original number is: %d \n",num);

	printf("\n Reverse number is:%d \n \n", reverse(num));

}
