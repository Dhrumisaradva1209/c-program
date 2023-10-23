//without using '*' ,'/' .

#include<stdio.h>
void main(){
	float a,b,c;
	printf("Enter your number : ");
	scanf("%f",&a);
	b=a+a;
	printf("%f*2 = %f\n",a,b);
	c=a*(0.5);
	printf("%f/2 = %f",a,c);
}
