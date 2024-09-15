#include <stdio.h>
int main(){
    char c;
    printf("enter a character");
    scanf("%c",&c);
    if(c>='a' && c<='z')
    printf("small aplhabet");
    else if(c>='A' && c<='Z')
    printf("capital alphabet");
    else if(c>='1' && c<='10')
    printf("digits");
    else
    printf("%c is a special character");
    
    return 0;
}