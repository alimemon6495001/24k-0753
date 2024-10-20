#include <stdio.h>
int main(){
    
     int arr[10];
    int n = arr[0];
    arr[0] = n;
   
    printf("enter a number");
    scanf("%d",&n);
    int sum = 0;
    int lastdigit = 0;
    while(n!=0){
    lastdigit = n%10;
    sum = sum + lastdigit;

    n = n/10;
    }
     printf("the sum of elements is %d",sum);
    
     return 0;
}
