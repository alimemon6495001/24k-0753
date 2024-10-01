#include<stdio.h>

int main(){
    int number,count =0;
    printf("Enter the number : ");
    scanf("%d",&number);
    while (number != 0)
    {
        count += number & 1;
        number = number >> 1;
    }
    printf("The number of 1's is %d",count);
    return 0;
}
