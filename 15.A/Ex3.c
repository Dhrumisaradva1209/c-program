//Count number of elements divisible by 3 in array.

#include<stdio.h>
void main(){
	int a[5],i,c=0;
	for(i=0;i<5;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]%3==0){
			c++;
		}
	}
	printf("Total number of negative element = %d",c);
}
