#include <stdio.h>
int main(){
   int array[]={4,1,6,8,10,21,8,9,2,6};
   int n = sizeof(array)/sizeof(array[0]);
   int i = 1;
   int max = array[0];
   int min = array[0];

   for(;i<n;i++){
    if(array[i] > max){
    max = array[i];
    }
   if(array[i] < min){
    min = array[i];
   }
   }
    printf("the maximum number = %d\n",max);
    printf("the minimum number = %d\n",min);

   return 0;

}
