#include<stdio.h>

void main(){
	
	int a,b,c;
	
	printf("enter an val of a:");
	scanf("%d",&a);
	
	printf("enter an val of b");
	scanf("%d",&b);
	
	printf("enter an val of c");
	scanf("%d",&c);
	
	(a>b)?(a>c):(b>c)?((a*b):(a*c)):((b*a):(b*c)));
}
