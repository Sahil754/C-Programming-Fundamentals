//Program copies a string str1 into string str2

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[6] = {'H','e','l','l','o','\0'};
	
	//Using strcpy
	char str2[6];
	strcpy(str2,str1); //Copying str1 into str2
	printf("strcpy(str2,str1):%s\n",str2);

	printf("\n");
	return 0;
}
