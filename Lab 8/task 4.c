#include <stdio.h>

int main()
{
	int max,min,i,j,count,num;
	
	printf("Enter minimum number:\n ");
	scanf("%d",&min);
	printf("enter maximum number:\n");
	scanf("%d",&max);
	
	printf("prime number between %d and %d is:",min,max);
	num = min;
	
	while(num <= max){
	count = 0;
	i = 2;
	while (i<=num/2){
	if(num%i==0){
	count++;
	break;
			}
	i++;
	}
	if(count==0 && num !=1)
	{
	printf(" %d",num);
	}
	num++;
	}
	return 0;
}
