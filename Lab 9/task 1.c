#include <stdio.h>
int product(int x, int y);

int main() {
    int result = product(30, 20); 
    printf("Product is: %d\n", result);  
    return 0;
}
int product(int x, int y) {
    return x * y;  
}
