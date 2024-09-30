#include <stdio.h>

  int main() {
        int a; 
        int b;
        printf("\nEnter Any Integer Of a");
        scanf("%d",&a);
        
        printf("\nEnter Any Integer Of b");
        scanf("%d",&b);
        
        printf("\nValue Before Swapping");
        printf("\n Value Of a=%d",a);
        printf("\n Value Of b=%d",b);
        a=a^b;
        b=a^b;
        a=a^b;
        printf("\nValue After Swapping");
        printf("\nValue Of a=%d",a);
        printf("\nValue Of b=%d",b);
        return 0;
        
       }