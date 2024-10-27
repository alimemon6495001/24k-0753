#include <stdio.h>
int main()
{
	int a[3][3],b[3][3];
	int result[3][3];
	int i,j,k;
	
	printf("enter the elements of first matrix:\n ");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("enter the number of elements a%d%d:",i+1,j+1);
	scanf("%d",&a[i][j]);
	}
	}
	
	printf("\nenter the elements of second matrix\n");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("enter number of elements a%d%d:",i+1,j+1);
	scanf("%d",&b[i][j]);
	}
        }
        printf("the first matrix is:\n ");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %d",a[i][j]);
	}
	printf("\n");
        }
	printf("the second matrix is\n ");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %d",b[i][j]);
	}
	printf("\n");
        }
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	result[i][j]=0;
	}
        }
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	for(k=0;k<3;k++){
	result[i][j]+=a[i][k]*b[k][j];
	}
	}
		
	}
	printf("the answer of matrix after multiplication will be:\n");
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %d",result[i][j]);
	}
	printf("\n");
        }
        return 0;
        }
