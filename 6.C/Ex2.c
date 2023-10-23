#include<stdio.h>
void main(){
	int r,g,b;
	float w,m,c,ye,k;
	float x,y,z;
	
	printf("Enter Velue of RGB\n");
	printf("Velue of Red : ");
	scanf("%d",&r);
	printf("Velue of Green : ");
	scanf("%d",&g);
	printf("Velue of Blue : ");
	scanf("%d",&b);
	
	x=r/255;
	y=g/255;
	z=b/255;
	
	w=(x>y)?((x>z)?x:z):((y>z)?y:z);
	
	c=(w-x)/(w*1.0);
	m=(w-y)/(w*1.0);
	ye=(w-z)/(w*1.0);
	k=1-(w*1.0);
	printf("\nCMYK : %f %f %f %f",c,m,ye,k);
}
