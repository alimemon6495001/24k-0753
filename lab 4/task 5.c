#include <stdio.h>

int main(){
    int customer_id;
    char customer_name [10];
    float unit_consumed =0.0;
    float charge_per_unit = 0.0;
    float total_charges = 0.0;
    float surcharge;
    float net_amount;
    
    printf("enter the customer_id");
    scanf("%d",&customer_id);
    printf("enter the customer_name");
    scanf("%s",&customer_name);
    printf("enter the unit_consumed");
    scanf("%f",&unit_consumed);
    
    printf("%f",total_charges);
    
    //calculate charge per unit based on unit consumption 
    if (unit_consumed<=199)
  {
    charge_per_unit = (16.20);
  }  
    else if(unit_consumed >=200 && unit_consumed <300)
  {
    charge_per_unit = (20.10);
  }
    else if(unit_consumed >=300 && unit_consumed <500)
  {
    charge_per_unit = (27.10);
  }  
    else if(unit_consumed >=500)
  {  
    charge_per_unit = (35.90);
  }  
    printf("%.2f",unit_consumed);
    // calculate total charges
    total_charges =(unit_consumed*charge_per_unit);
    // print total charges
    printf("total_charges is %.2f",total_charges);
    
    if(total_charges>18000)
    {
    surcharge=(total_charges*0.15);
    }
    net_amount=total_charges+surcharge;
    
    return 0;
}