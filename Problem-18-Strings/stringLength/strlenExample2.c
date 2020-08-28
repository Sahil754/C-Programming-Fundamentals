//Program copies a string str1 into string str2

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[6] = {'H','e','l','l','o','\0'};
	
	int len;
	//Using strlen
	len = strlen(str1); //Total length of str1
	printf("strlen(str1): %d\n",len);

	printf("\n");
	return 0;
}
