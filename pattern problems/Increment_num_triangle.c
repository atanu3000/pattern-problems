#include<stdio.h>
int main(){
	int i,j,r,count=1;  // count for increment num
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++){	//outer loop
		for(j=1;j<=i;j++){	//inner loop
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
	return 0;
}
