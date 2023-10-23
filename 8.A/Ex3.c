//Print numbers between two given numbers which is divisible by 2.

#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter your first Number : ");
	scanf("%d",&n1);
	printf("Enter your second Number : ");
	scanf("%d",&n2);
	while(n1<=n2){
		if(n1%2==0){
			printf("%d ",n1);
		}
		n1++;
	}
}
