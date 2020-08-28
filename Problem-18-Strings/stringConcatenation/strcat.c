//Program copies a string str1 into string str2

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[6] = {'H','e','l','l','o','\0'};
	char str2[7] = {'F','r','i','e','n','d','\0'};
	
	//Using strcat
	strcat(str1,str2); //Concatenates str1 and str2
	printf("strcat(str1,str2): %s\n",str1);

	printf("\n");
	return 0;
}