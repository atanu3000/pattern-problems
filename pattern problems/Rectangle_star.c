#include<stdio.h>
int main(){
	int i,j,r,c;  // r for rows, c for columns
	printf("Enter the number of row : ");
	scanf("%d",&r);
	printf("Enter the number of column : ");
	scanf("%d",&c);
	for(i=0;i<r;i++){	//outer loop
		for(j=0;j<c;j++){	//inner loop
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}