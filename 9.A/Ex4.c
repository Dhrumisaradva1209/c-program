//4.Find factorial of the given number.

#include<stdio.h>
void main(){
	int n,i=1,s=1;
	printf("Enter Number : ");
	scanf("%d",&n);
	while(i<=n){
		s=s*i;
		printf("%d*",i);
		i++;
	}
	printf("\b = %d",s);
}
