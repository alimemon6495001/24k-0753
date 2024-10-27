#include <stdio.h>

int main()
{
	int arr[2][3][3]={{{1,2,3},{4,5,6},{7,8,9}},{{2,4,6},{8,10,12},{14,16,18}}};
	int i,j;
	int sumPage1=0;
        int sumPage2=0;
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	sumPage1+=arr[0][i][j];
	}
	}
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	sumPage2+=arr[1][i][j];
	}
	}
	printf("Sum of elements on each page 1 is:%d\n",sumPage1);
	printf("Sum of elements on each page 2 is:%d ",sumPage2);	
}
