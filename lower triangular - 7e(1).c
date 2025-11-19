#include<stdio.h>
int main()
{
	int r,i,j;
	printf("Enter the number of rows columns of square matrix:");
	scanf("%d",&r);
	int a[r][r];
	printf("Enter the elements of matrix:\n");
	for(i=0;i<r;i++)
	for(j=0;j<r;j++)
	scanf("%d",&a[i][j]);
	// checking
	int is_lower_triangular=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(j>i && a[i][j]!=0 || j<=i && a[i][j]==0)
			{
				is_lower_triangular=0;
				break;
			}
		}
	}
	if(is_lower_triangular){
	printf("Given matrix is a lower triangular matrix");
	}else{
		printf("Given matrix is not an lower triangular matrix");
	}
}