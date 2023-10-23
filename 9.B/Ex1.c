//Print all uppercase and lowercase alphabets.

#include<stdio.h>
void main(){
	char a=65,b=97;
	while(a<=90){
		printf("%c ",a);
		a++;
	}
	printf("\n");
	while(b<=122){
	printf("%c ",b);
	b++;
	}
}
