//Demonstrate int, float, double and char pointer.

#include<stdio.h>
void main(){
	int *a,n1;
	float *b,n2;
	double *c,n3;
	char *d,n4;
	printf("int n1 = ");
	scanf("%d",&n1);
	printf("float n2 = ");
	scanf("%f",&n2);
	printf("double n3 = ");
	scanf("%lf",&n3);
	printf("char n4 = ");
	scanf("%c",&n4);
	a=&n1;
	b=&n2;
	c=&n3;
	d=&n4;
	printf("int : %d %d",a,*a);
	printf("\nfloat : %f %f",b,*b);
	printf("\ndouble : %lf %lf",c,*c);
	printf("\nchar : %d %c",d,*d);
}
