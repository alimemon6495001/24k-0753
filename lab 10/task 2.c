#include <stdio.h>
#include <string.h>


int getLength(char input[]) {
    int index;
    for (index = 0; input[index] != '\0'; index++);
    return index;
}


void printReverse(char input[], int size) {
    if (size < 0) {
        printf("%c", input); 
    } else {
        printf("%c", input[size]);
        size--;
        printReverse(input, size);
    }
    return;
}

int main() {
    char input[100];
    int size;

    printf("Type a string: ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0'; 

    size = getLength(input); 
    printReverse(input, size); 
    return 0;
}
