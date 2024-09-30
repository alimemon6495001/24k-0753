#include <stdio.h>
int main(){ 

    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>=1 && age<=12)
     
    printf("child");
    
    else if(age>=13 && age<=19)
   
    printf("teenager");
   
    else if(age>=20 && age<=35)
    
    printf("adult");
  
    else if(age>=36)
  
    printf("senior");
    
    else 
    
    printf("error");
    
    
    return 0;
    
  
}