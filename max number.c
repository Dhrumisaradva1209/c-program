#include<stdio.h>
void main()
{
	int max,a,b,c;
	printf("enter your number");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("the largest number is %d",max);
}
