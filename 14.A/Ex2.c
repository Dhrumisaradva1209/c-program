//Count number of positive or negative number from an array of n numbers.

#include<stdio.h>
void main(){
	int n,i,p=0,N=0;
	printf("How many Number you want : ");
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++){
		printf("n[%d] = ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=0){
			p++;
		}
		else{
			N++;
		}
	}
	printf("Positive Numbers = %d\nNegative Numbers = %d",p,N);
}
