//Program copies a string str1 into string str2

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[6] = {'H','e','l','l','o','\0'};
	printf("%s \n",str1);

	//Using strcpy
	char str2[6];
	strcpy(str2,str1);
	printf("\nstr2 has the following string in it: %s",str2);

	printf("\n");
	return 0;
}
