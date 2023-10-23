#include<stdio.h>

void main(){
	
	int a,i=1;
	
	printf("enter an int val:");
	scanf("%d",&a);
	
	while(i<=a){
		
	if(i%2==1){
		printf("%d",i);
		i=i+1;
	}
	else{
		i=i+1;
	}
	
	
	}
}
