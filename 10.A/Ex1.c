//1. Find out sum of first and last digit of a given number.

#include<stdio.h>
void main(){
	int n,i,f,l;
	printf("Enter number : ");
	scanf("%d ",&n);
	l=n%10;
	while(n>=0){
		i=n%10;
		n=n/10;
	}
	f=i;
	printf("%d + %d = %d",f,l,f+l);
}
