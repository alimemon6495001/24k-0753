#include <stdio.h>

int main() {
    int num, i = 0;
    int n;


    printf("Enter a number: ");
    scanf("%d", &num);


    n = (num < 0) ? -num : num;

    for (; n > 0; n /= 10) {
        i++;
    }


    if (i > 1) {
        printf("%d is a multiple-digit number.\n", num);
    } else {
        printf("%d is not a multiple-digit number.\n", num);
    }

    return 0;
}
