//Given Number is even or odd using bitwise

#include<stdio.h>
void main(){
	int a;
	printf("Enter your Number : ");
	scanf("%d",&a);
	if((a&1)==1){
		printf("%d is odd",a);
	}
	else{
		printf("%d is even",a);
	}
}
