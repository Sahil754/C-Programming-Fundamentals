/*To test code in http://pythontutor.com/c.html#mode=edit*/

int main() {
char str[4] = {'a','b','c','\0'};
    int n = 1;
    char str2[10];
    int i;
    int len;
    int p;
    
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