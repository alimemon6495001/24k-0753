#include <stdio.h>
void checkingEvenOdd(int n);

int main() {
    int number;

    printf("Enter a number\n ");
    scanf("%d", &number);
    
    checkingEvenOdd(number);
    
    return 0;
}


void checkingEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is even\n", n);
    } else {
        printf("%d is odd\n", n);
    }
}
