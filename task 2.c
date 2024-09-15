#include <stdio.h>
int main(){
    float X,Y;
    char Z;
    printf("enter the operator");
    scanf(" %c",&Z);
    printf("enter any number of X");
    scanf("%f",&X); 
    printf("enter any number of Y");
    scanf("%f",&Y);
    
    if(Z=='+')
    printf("%.2f",X+Y);
    else if(Z=='-')
    printf("%.2f",X-Y);
    else if(Z=='*')
    printf("%.2f",X*Y);
    else if(Z=='/')
    printf("% .2f",X/Y);
   
    return 0;
}