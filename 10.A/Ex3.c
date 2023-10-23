//3. Find whether the given number is prime or not.

#include<stdio.h>
void main(){
	int n,i=2,c=0;
	printf("Enter number: ");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			c++;
		}
	i++;	
	}
	if(c==0){
		printf("%d is prime number.",n);
	}
	else{
		printf("%d is not prime number.",n);
	}
}
