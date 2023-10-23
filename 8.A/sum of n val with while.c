#include<stdio.h>

void main(){
	
	int a,sum,i=0;
	
	printf("enter an int val:");
	scanf("%d",&a);
	
	while(i<=a){
		
		sum=sum+i;
		
		
		i=i+1;
	}
	printf("%d", sum);
}
