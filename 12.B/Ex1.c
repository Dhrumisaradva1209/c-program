//Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n)

#include<stdio.h>
void main(){
	int n,i,j,sum;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			sum=sum+j;
		}
	}
	printf("1 + (1+2) + (1+2+3) +...+ (1+2+3+...+n) = %d",sum);
}
