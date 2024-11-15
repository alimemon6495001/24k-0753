#include <stdio.h>

void reverse(char str[], char reverse[]);

int main(){
    char str1[50], str2[50];
    printf("Enter string\n ");
    fgets(str1, sizeof(str1), stdin);
    reverse(str1, str2);
    printf("the Reversed string is\n");
    puts(str2);
}

void reverse(char str[], char reverse[]){
    int i;
    int len=0;
    for(i=0; str[i]!='\0'; i++){
        len++;
    }

    for(i=0; str[i]!='\0'; i++){
        reverse[i]=str[len-i-1];
    }
    return;
}