//Read and store the roll no and marks of 20 students using 2D array.

#include<stdio.h>
void main(){
	int a[20][2],i,j;
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("student %d : ",i);
			scanf("%d",&a[i][j]);
		}
	}
	printf("roll\tmark\n");
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("%d \t ",a[i][j]);
		}
		printf("\n");
	}
}
