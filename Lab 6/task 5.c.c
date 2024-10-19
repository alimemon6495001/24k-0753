#include <stdio.h>
int main(){

   int x=65536;
   int y=2;
   int i=0;
   int z;
   printf("65536\n");


   for(;i<8;i++){

    z=x/y;
    y++;
    x=z;
    printf("%d\n",x);

   }
   return 0;
}
