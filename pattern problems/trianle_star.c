#include<stdio.h>
int main(){
	int i,j,r;  // r for rows, c for columns
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++){	//outer loop
		for(j=1;j<=i;j++){	//inner loop
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
