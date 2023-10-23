//Read n numbers from user and print in normal and reverse order.

#include<stdio.h>
void main(){
	int n,i;
	printf("How many Number you want : ");
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++){
		printf("n[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Normal Order   : ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nReverse Order  : ");
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
