#include<stdio.h>

int main(){
    int n; 
    int i=2;
    int x;
    int Prime = 1;  
    printf("Enter number ");
    scanf("%d", &n);
    if (n < 2) {
        Prime = 0;
    } else {
        x = n / 2; 
        while (i <= x) {
            if (n % i == 0) {
                Prime = 0;  
                break;
            }
            i++;  
        }
    }
    if (Prime) {
        printf("%d a Prime number\n", n);
    } else {
        printf("%d a Composite number\n", n);
    }
    return 0;
}