/*To test code in http://pythontutor.com/c.html#mode=edit*/

int main() {

    /*Change c to a, in second test when using that website to test this code, to check 
    both scenarios*/
    
    char str[4]={'a','b','c','\0'};
    int len;
    int start =0;
    int end;
    
    len = strlen(str);
    end = len-1;

    int result =0;
    while(start <= end){
        if(str[start] != str[end]){
            result =1;
            break;
        }
        start++;
        end--;
    }

    (result ==0)?printf("Given string is palindrome"):printf("Given string is not pellindrome");

    printf("\n");

  return 0;
}