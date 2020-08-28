//Program copies a string str1 into string str2

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[6] = {'H','e','l','l','o','\0'};
	char str3[4];
    //printf("%s \n",str1);

	//Using strncpy
	
    /*First argument:Destination, Second argument:Source,
    Third argument: How many characters to copy.
    */
    strncpy(str3,str1,4);
    /*Prints specified amount of characters from original string,
    and then the full original string.*/    
    printf("After strncpy str3 is: %s",str3);

	printf("\n");
	return 0;
}