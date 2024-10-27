
	#include <stdio.h>
int main()
{
	int arr[3][3];
	int i,j;
	int min_row,col_index,sp;
	
	printf("enter elements of matrix:\n ");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter the number of elements a%d%d:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}

}
    printf("the matrix is:\n ");
	
	for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf(" %d",arr[i][j]);
	}
	printf("\n");
        }
	for(i=0;i<3;i++){
	min_row = arr[i][0];
	col_index=0;
	for(j=1;j<3;j++){
	if(arr[i][j] < min_row){
	min_row = arr[i][j];
	col_index;
	}
	}
	sp=1;
	for(j=0;j<3;j++){
	if(arr[j][col_index] > min_row){
	sp=0;
	break;
	}
	}
	if(sp){
	printf("Saddle point: %d\n",min_row);
	return 0;
	}
	}
	printf("No saddle point found in matrix");
	return 0;
}
