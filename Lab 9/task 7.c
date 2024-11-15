#include <stdio.h>

int check(int n);

int main(){
    int n;
    printf("Enter the number:\n ");
    scanf("%d", &n);

    if(check(n)){
        printf("%d is Prime number\n", n);
    }
    else printf("%d is not Prime number\n", n);
}

int check(int n){
    if(n==2) return 1;
    int i;
    for(i=2; i<=n/2; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
