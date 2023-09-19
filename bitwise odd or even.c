#include<stdio.h>
void main()
{
	int x;
	printf("enter your number:-");
	scanf("%d",&x);
	if (x&1)
	{
		printf("this is odd.");
	}
	else
	{
		printf("this is even");
	}
}
