//while loops bahtar hai for user input kai liyai
#include <stdio.h>

int main() {
    int input = 1;
    int sum = 0;

    while (input != 0) {
        printf("Enter a number(0 for exit):\n ");
        scanf("%d", &input);

        if (input != 0) {
            sum += input;
            printf("present sum: %d\n", sum);
        }
    }

    printf("Final sum: %d\n", sum);
    return 0;
}






