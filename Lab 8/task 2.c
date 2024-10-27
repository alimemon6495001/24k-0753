#include <stdio.h>
int main()
{
	int i,j,x,y;
	int arr[3][3];
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("enter number of matrix a%d%d:",i+1,j+1);
	scanf("%d",&arr[i][j]);
   }
   }
        printf ("the matrix that you not entered is:\n");
    	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %d",arr[i][j]);
			
  }
	printf("\n");
  }
	printf("the transpose of matrix is:\n");
	for(j=0;j<3;j++){
	for(i=0;i<3;i++){
	printf(" %d",arr[i][j]);
  }
	printf("\n");
  }
}
