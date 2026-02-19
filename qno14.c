#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,len,flag=1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    len=strlen(str);
    for(i=0; i<len/2; i++){
        if(str[i]!=str[len-1-i]){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("the string is a palindrome");
    }
    else{
        printf("the string is not a palindrome");
    }
     for(i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("the uppercase string is %s", str);
     return 0;
}