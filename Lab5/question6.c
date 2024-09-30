#include <stdio.h>
int main(){
    int a;
    printf("a\n");
    scanf("%d",&a);
    a>0 ? printf("positive\n"):a<0 ? printf("negative\n"):printf("zero");


    return 0;
}