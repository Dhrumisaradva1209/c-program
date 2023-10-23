//Get 10 numbers from user print count of odd, even numbers.

#include<stdio.h>
void main(){
	int n,i=1,count=0;
	while(i<=10){
		printf("Enter your Number : ");
		scanf("%d",&n);
		
		if(n%2==0){
		count++;
		}
		i++;
	}
	printf("count of even number is %d\n",count);
	printf("count of odd number is %d",10-count);
}
