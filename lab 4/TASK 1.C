#include <stdio.h>

int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%3==0) {
    printf("this is multiple of 3");
    }//end if 
    else {
    printf("this is not multiple of 3");
    }//end else 
    return 0;
}