//2. Print multiplication table of a given number.

#include<stdio.h>
void main(){
	int n,i=1,s;
	printf("Enter your Number : ");
	scanf("%d",&n);
	while(i<=10){
		s=i*n;
		printf("%d * %2d = %d\n",n,i,s);
		i++;
	}
}
