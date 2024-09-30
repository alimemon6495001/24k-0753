#include <stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
    printf("positve\n");
    else if(n<0)
    printf("negative\n");
    else
    printf("zero\n");
    if (n%2==0 && n>0)
    printf("even\n");
    else
    printf("odd\n");
    return 0;
}