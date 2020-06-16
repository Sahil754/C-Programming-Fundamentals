#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 345, total;
	total = sum(number);

	printf("The sum of the digits of %d is %d",number,total);

	return 0;
}
