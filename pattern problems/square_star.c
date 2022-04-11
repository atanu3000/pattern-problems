#include<stdio.h>
int main(){
	int i,j,l;
	printf("Enter the number of row_column : ");
	scanf("%d",&l);
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}