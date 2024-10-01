#include<stdio.h>
int main(){
    char x,encryp,decryp;
    int y;
    printf("enter the character\n");
    scanf("%c",&x);
    printf("enter the number\n");
    scanf("%d",&y);
    encryp=x^y;
    printf("the encryp character is %c\n",encryp);
    decryp=encryp^y;
    printf("the decryp character is %c\n",decryp);
    
    return 0;
}