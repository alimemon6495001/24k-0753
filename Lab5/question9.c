#include <stdio.h>

int main(){
    int y;
    printf("enter a number");
    scanf("%d",&y);
    if(y%4==0 && y%100!=0 || y%400==0)
    printf("leap year");
    else
    printf("not leap year");

    return 0;
}