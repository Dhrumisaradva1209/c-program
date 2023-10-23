//Copy all elements of one array to another.


#include<stdio.h>
void main(){
	int a[5],b[5],i,j;
	for(i=0;i<5;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		b[i]=a[i];
	}
	for(i=0;i<5;i++){
		printf("\nb[%d] = %d",i,b[i]);
	}
}
