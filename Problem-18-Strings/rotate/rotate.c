/*Program prints given string rotated n number of times. E.g. abc becomes cab after one 
rotation.*/

#include<stdio.h>
#include<string.h>

int main(){
	
	char str[10];
	int n;
	char str2[10];
    int i;
	int len;
    int p;
    printf("Enter a string: ");
	scanf("%s",str);

	printf("Enter how many times you want the string to be rotated: ");
	scanf("%d",&n);

    len = strlen(str);
    for(i=0;i<len;i++){
        p = (i + n)%len;
        str2[p] = str[i];
    }
    str2[len] = '\0';
    printf("\n Rotated string is %s",str2);
    
	printf("\n");
	return 0;
}


