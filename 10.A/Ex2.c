//2. Find the sum and average of different numbers which are accepted by user as many as user wants.

#include<stdio.h>
void main(){
	float avg,sum=0;
	int n,a,i=1,c=0;
	printf("how many number you want : ");
	scanf("%d",&a);
	while(i<=a){
		printf("Enter number: ");
		scanf("%d",&n);
		sum=sum+n;
		i++;
	}
	avg=(sum/a);
	printf("Sum = %f\nAvg = %f",sum,avg);
}
