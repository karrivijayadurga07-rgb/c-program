#include<stdio.h>
#include<math.h>
int main()
{
	int original,reverse=0,temp,rem;
	printf("Enter a number:");
	scanf("%d",&original);
	temp=original;
	while(temp!=0)
	{
		int rem=temp%10;
		reverse=reverse*10+rem;
		temp=temp/10;
	}
	if(original==reverse) 
	printf("Palindrome");
	else 
	printf("Not a Palindrome");
}
