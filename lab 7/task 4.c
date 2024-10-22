#include <stdio.h>
int main(){
   
   int n,i;
   printf("enter number of elements");
   scanf("%d",&n);
   int array[n];
   int count[n];
   for(i=0;i<n;i++){
    count[i] = 0;
   }
   for(i=0;i<n;i++){
    printf("element %d =",i+1);
   scanf("%d",&array[i]);
   count[array[i]]++;
   }
   printf("numbers occurs more than once is/are\n");
   int found = 0;
   for(i=0;i<n;i++)
   {
       if(count[i] > 1){
        printf("%d",i);
        found = 1;
       }
   }
   if(!found){
    printf("no number occur more than once");
   }
   printf("\n");
   return 0;

}