#include <stdio.h>

int main() {
    float item_cost;
    float shopping;
    float discount = 0.0; 
    float final_price;

    printf("Enter the item cost: ");
    scanf("%f", &item_cost);

    printf("Enter the shopping amount: ");
    scanf("%f", &shopping);

    if (item_cost < 2000) {
       discount = (item_cost * 5) / 100;
       printf("Discount for item cost is: %.3f\n", discount);
    }

    if (shopping >= 2000 && shopping <= 4000) {
        discount = (shopping * 10) / 100;
        printf("Discount for shopping is: %.3f\n", discount);
    } 
    else if (shopping >= 4000 && shopping <= 6000) {
        discount = (shopping * 20) / 100;
        printf("Discount for shopping is: %.3f\n", discount);
    } 
    else if (shopping > 6000) {
        discount = (shopping * 35) / 100;
        printf("Discount for shopping is: %.3f\n", discount);
    }
    final_price = shopping - discount;
    printf("Final price after discount is: %.3f\n", final_price);

    return 0;
}