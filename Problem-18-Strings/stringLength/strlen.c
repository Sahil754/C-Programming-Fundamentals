//Program prints length of given string.


#include <stdio.h>
#include <string.h>

int main(){
	
	char str[6] = {'H','e','l','l','o','\0'};
	printf("%s \n",str);

	//using strlen
	printf("\n Length of string is %d ",strlen(str));

	printf("\n");
	return 0;
}
