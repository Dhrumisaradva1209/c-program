#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter three number :");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b) && (a>c)){
		if(b>c){
			printf("%d is second largest number",b);
		}
		else{
			printf("%d is second largest number",c);
		}
	}
	else if((b>a) && (b>c)){
		if(a>c){
			printf("%d is second largest number",a);
		}
		else{
			printf("%d is second largest number",c);
		}
	}
	else{
		if(a>b){
			printf("%d is second largest number",a);
		}
		else{
			printf("%d is second largest number",b);
		}
	}
}
