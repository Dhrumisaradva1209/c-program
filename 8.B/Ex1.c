//Print number and its square root for 0 to 9.

#include<stdio.h>
#include<math.h>
void main(){
	float n=0,a;
	while(n<=9){
		a=sqrt(n);
		printf("square root of %f : %f\n",n,a);
		n++;
	}
}
