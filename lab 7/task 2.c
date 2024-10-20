#include <stdio.h>
int main(){
    int i;
  
  int array[] = {1,2,3,4,5,6,7,8,9};
  int n = sizeof(array)/sizeof(array[0]);
  
  printf("reverse order");
  for(i=n-1;i>=0;i--){
    printf("%d",array[i]);
  } 
   printf("\n");
   
   return 0;

}