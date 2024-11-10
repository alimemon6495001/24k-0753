#include <stdio.h>
#include <string.h>

void appendString(char destination[], const char source[], int n);

int main() {
    char destination[100], source[100];
    int n;
    printf("Enter the destination string: ");
    fgets(destination, sizeof(destination), stdin);
    destination[strcspn(destination, "\n")] = 0; 
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = 0; 
    printf("Enter the number of characters to append: ");
    scanf("%d", &n);
    
    appendString(destination, source, n);
    printf("The new concatenated string is: %s\n", destination);
    
    return 0;
}

void appendString(char destination[], const char source[], int n) {
    int destLength = strlen(destination);  
    int i;
    for (i = 0; i < n && source[i] != '\0'; i++) {
        destination[destLength + i] = source[i];
    }
    destination[destLength + i] = '\0';
}
