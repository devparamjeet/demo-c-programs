//	Write a Program to Reverse a Given Number 
#include<stdio.h>
int main()
{
	int n,rev;
	printf("Enter the Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		rev=n%10;
		printf("%d",rev);
		n=n/10;
	}
}
