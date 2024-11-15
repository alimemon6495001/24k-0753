#include <stdio.h>

void swapIntegers(int x, int y);

int main(){
    int x, y;
    printf("Enter first number\n ");
    scanf("%d", &x);
    printf("Enter second number\n ");
    scanf("%d", &y);
    swapIntegers(x, y);
}

void swapIntegers(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("The first number is: %d\n", x);
    printf("The second number is: %d\n", y);
    return;
}