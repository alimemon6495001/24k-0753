#include <stdio.h>
int main(){

    int a;
    int b;
    printf("enter a\n");

    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    a>b?printf("a is greater than b\n"):printf("b is greater than a\n");


    return 0;
}