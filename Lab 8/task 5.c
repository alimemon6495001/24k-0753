#include <stdio.h>

int main()

{
	int i,j,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	if (n%2==0)
	{
	printf("kindly enter a odd number\n");
	}
	else{
	
	for(i=n;i>=1;i=i-2){
	for(j=i;j>=1;j=j-2){
	printf("%d",j);
	}
	printf("\n");
	}
}
}
