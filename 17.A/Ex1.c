//Print value and address of a variable.

#include<stdio.h>
void main(){
	int n,*a;
	printf("n = ");
	scanf("%d",&n);
	a=&n;
	printf("%d\n%d",a,*a);
}
