//Program to read test.txt file.

#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt","r");
    
    char buffer[256];
    
    fscanf(fp,"%s",buffer);
    printf("\n%s",buffer);
    
    //fgets() to read the contents of the file.
    fgets(buffer,256,(FILE *)fp);
    printf("\n%s",buffer);
    
    printf("\n");
    
    return 0;
}
