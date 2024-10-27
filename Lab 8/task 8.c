#include <stdio.h>

int main() {
	int n;
	printf("enter rows of upper half\n:\t");
	scanf("%d",&n);
	for(int i=0;i<n+1;i++) {
	for(int z=n+1;z>i+1;z--) {
	printf(" ");
	}
	for(int j=0;j<=i;j++) {
	printf("* ");
	}
	printf("\n");
	}
	for(int i=0;i<n;i++) {
	for(int z=0;z<=i;z++) {
	printf(" ");
	}
	for(int j=n+1;j>=i+2;j--) {
	printf("* ");
	} 
	printf("\n");
	}
}
