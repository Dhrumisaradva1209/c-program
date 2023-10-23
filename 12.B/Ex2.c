//Estimate the value of the mathematical constant e. (Formula: e = 1 + 1/1! + 1/2! + 1/3! + 1/4! ...)

#include<stdio.h>
void main(){
	float i,j,e=0,f=1;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			f=f*j;
		}
		e=e+(1/f);
	}
	printf("(Formula: e = 1 + 1/1! + 1/2! + 1/3! + 1/4! ...)\nconstant e ~ %f",e+1);
}
