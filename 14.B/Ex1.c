//Sort elements of an array in an ascending order.

#include<stdio.h>
void main(){
	int a[5],i,j,temp;
	for(i=0;i<5;i++){
		printf("arry[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
}
