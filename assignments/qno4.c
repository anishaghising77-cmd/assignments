#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d", ch, ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("converted to uppercase is %c", ch - 32);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("converted to lowercase is %c", ch + 32);
    }
    else {
        printf("the character is not an alphabet");
    }
     return 0;
}
