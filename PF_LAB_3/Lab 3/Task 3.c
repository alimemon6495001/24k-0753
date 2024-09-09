#include <stdio.h>

int main(){
    float salary;
    float taxrate;
    float tax;
    printf("enter the salary");
    scanf("%f",&salary);
    printf("enter the taxrate");
    scanf("%f",&taxrate);
    tax= 0.01 * taxrate*salary;
    
    printf("the net tax is %f",tax);
    return 0;
}