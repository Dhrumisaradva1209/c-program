//Count total number of negative elements in array.

#include<stdio.h>
void main(){
	int a[5],i,c=0;
	for(i=0;i<5;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]>0){
			c++;
		}
	}
	printf("Total number of negative element = %d",c);
}
