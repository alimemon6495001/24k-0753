#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Check if the number is between 1 and 9
    if (n >= 1 && n <= 9) {
        switch(n) {
            case 1: printf("one");break;
            case 2: printf("two");break ;
            case 3: printf("three");break ;
            case 4: printf("four");break ;
            case 5: printf("five");break ;
            case 6: printf("six");break ;
            case 7: printf("seven");break ;
            case 8: printf("eight");break ;
            case 9: printf("nine");break ;
        }
    } 
    
    else if (n > 9) {
        printf("greater than 9");
    }
    
    return 0;
}