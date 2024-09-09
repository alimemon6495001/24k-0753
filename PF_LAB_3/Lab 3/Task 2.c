#include <stdio.h>

  int main() {
        int X; 
        int Y;
        printf("\nEnter Any Integer Of X");
        scanf("%d",&X);
        
        printf("\nEnter Any Integer Of Y");
        scanf("%d",&Y);
        
        printf("\nValue Before Swapping");
        printf("\n Value Of X=%d",X);
        printf("\n Value Of Y=%d",Y);
        X=X+Y;
        Y=X-Y;
        X=X-Y;
        printf("\nValue After Swapping");
        printf("\nValue Of X=%d",X);
        printf("\nValue Of Y=%d",Y);
        return 0;
}