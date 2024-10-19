#include <stdio.h>
int main(){

   int n=1;

   int i=1;
   int j=2;
   printf("1,2\n");



   for(;n<9;n++){

    int sum=i+j;
    i=j;
    j=sum;
    printf("%d\n",sum);

   }
   return 0;
}
