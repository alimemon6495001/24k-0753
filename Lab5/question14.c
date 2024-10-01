#include<stdio.h>

int main(){
    int age;
    int income;
    int credit_score;
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your income");
    scanf("%d",&income);
    printf("Enter your credit_score");
    scanf("%d",&credit_score);
    if(age > 18 && income > 1000 && credit_score >= 200){
        printf("You are eligible for loan");
    }else
        printf("You are not eligible for loan");
    return 0;
}
