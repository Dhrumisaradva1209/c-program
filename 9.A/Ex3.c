//3. Calculate X^y without using power function.

#include<stdio.h>
void main(){
	int x,y,z,i;
	printf("Enter base : ");
	scanf("%d",&x);
	printf("Enter power : ");
	scanf("%d",&y);
	while(i<=y){
		z=i*y;
		i++;
	}
	printf("%d^%d = %d",x,y,z);
}
