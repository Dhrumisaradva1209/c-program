// Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.

#include<stdio.h>
void main(){
	int n,i=1,s=0;
	printf("Enter Your number : ");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			s=s-i;
		}
		else{
			s=s+i;
		}
		i++;
	}
	printf("1 - 2 + 3 - 4 + 5 - 6 + 7 ... %d : %d",n,s);
}
