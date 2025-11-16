#include<stdio.h>
int main()
{
	int n,sum =0;
	printf("Enter size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) {
		printf("Enter integers");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++) {
		sum+=arr[i];
	}
	printf("%d",sum);
	return 0;
}