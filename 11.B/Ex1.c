//Print the .

#include<stdio.h>
void main(){
	int n,i,ans=0,t1=0,t2=1;
	int nextTerm=t1+t2;
	printf("n = ");
	scanf("%d",&n);
	printf("0,1,");
	for(i=3;i<=n;i++){
		printf("%d,",nextTerm);
		t1=t2;
		t2=nextTerm;
		nextTerm=t1+t2;
	}
}
