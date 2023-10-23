

#include<stdio.h>
void main(){
	int a,n1,n2,b;
	printf("[1] Addition\n[2] Sbtraction\n[3] Multipliction\n[4] Division\n");
	printf("Enter yuor choice : ");
	scanf("%d",&a);
	printf("Enter your First number : ");
	scanf("%d",&n1);
	printf("Enter your Second number : ");
	scanf("%d",&n2);
	if(a==1){
		b=n1+n2;
		printf("n1+n2 = %d",b);
	}
	else if(a==2){
		b=n1-n2;
		printf("n1-n2 = %d",b);
	}
	else if(a==3){
		b=n1*n2;
		printf("n1*n2 = %d",b);
	}
	else if(a==4){
		b=n1/n2;
		printf("n1/n2 = %d",b);
	}
}
