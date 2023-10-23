#include<stdio.h>
void main(){
	int a,b,c,x;
	printf("Enter three number :");
	scanf("%d %d %d",&a,&b,&c);
	x=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is largest number",x);
}
