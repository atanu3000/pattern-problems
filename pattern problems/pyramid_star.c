#include<stdio.h>
int main(){
	int i,j,r;  // r for rows
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++){	//outer loop
		for(j=r;j>=i;j--){	//inner loop
			printf("  ");
		}
		for(j=1;j<=i*2-1;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
