#include<stdio.h>

void main(){
	
	int a,i=1,oddcount=0,evencount=0;
	
	while(i<=10){
		
		printf("enter an int val:");
		scanf("%d",&a);
		
		if(a%2==0){
			evencount=evencount+1;
			
			
		}
		else{
			oddcount=oddcount+1;
			
		}
		i=i+1;
		
	}
	printf("evencount=%d",evencount);
	printf("oddcount=%d",oddcount);
}
