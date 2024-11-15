#include <stdio.h>

int main(){
    int n,i,j;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char str[n][20];
    for(i=0; i<n; i++){
        printf("Enter word %d: ", i+1);
        scanf("%s", str[i]);
    }

    for(i=0; i<n; i++){
        int len=0;
        int count=0;
        for(j=0; str[i][j]!='\0'; j++){
            len++;
        }

        for(j=0; j<len/2; j++){
            if(str[i][j]!=str[i][len-j-1]) break;
            else count++;
        }
        if(count==len/2){
            printf("Word %d is Palindrome\n", i+1);
        }
        else{
            printf("Word %d is not Palindrome\n", i+1);
        }
    }
}