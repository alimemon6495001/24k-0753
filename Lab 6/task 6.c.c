#include <stdio.h>
int main(){

   int x=1;
   int y=2;
   int i=0;
   int z;
   printf("1\n",x);
   printf("2\n",y);



   for(;i<7;i++){

    z=x*y;
    x=y;
    y=z;
    printf("%d\n",z);

   }
   return 0;
}
