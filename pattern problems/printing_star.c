#include<stdio.h>
int main(){
	int i,j,r;
	printf("Enter the number of row : ");
	scanf("%d",&r);
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
			printf("1 ");
		}
		printf("\n");
	}
	return 0;
}
