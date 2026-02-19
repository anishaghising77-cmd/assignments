#include<stdio.h>
int main(){
    char line [100];
    int totalchars=0;
    int spaces=0;
    printf("Enter a full line of text: ");
    fgets(line, sizeof(line), stdin);
    for (int i = 0; line[i] != '\0'; i++) {
        if(line[i]=='\n'){
            continue;
        }
        totalchars++;
        if (line[i] == ' ') {
            spaces++;
        }
    }
    printf("Total characters: %d\n", totalchars);
    printf("Number of spaces: %d\n", spaces);
    return 0;
}