#include<stdio.h>
int main()
{
	int r,i,j;
	printf("Enter size of square matrix:");
	scanf("%d",&r);
	int a[r][r];
	printf("Enter elements of matrix:\n");
	for(i=0;i<r;i++) {
		for(j=0;j<r;j++) {
			scanf("%d",&a[r][r]);
		}
	}
	int isLower = 1;
	for(i=0;i<r;i++) {
	for(j=0;j<r;j++) {
		if(a[i][j]!=0) {
			isLower = 0;
			break;
		}
	}
}
if(isLower)
printf("The Matrix is a Lower Triangular Matrix");
else 
printf("The Matrix is Not a Lower Triangular Matrix");
return 0;
	} 


