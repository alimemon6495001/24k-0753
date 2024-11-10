#include <stdio.h>
#include <string.h>

int main() {
    char a[8][10] = {"ali", "faik", "umer", "hafeez", "ubaid", "ahmed", "saboor", "soofyan"};
    char b[10];

    for (int i = 0; i < 8; i++) {
        printf("%s\n", a[i]);
    }

    printf("Enter a word: ");
    scanf("%9s", b);

    int found = 0;
    for (int j = 0; j < 8; j++) {
        if (strcmp(b, a[j]) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found\n");
    } else {
        printf("Not found\n");
    }

    return 0;
}