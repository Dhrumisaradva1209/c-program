

#include<stdio.h>
void main(){
	char s;
	printf("Enter any Symbol : ");
	scanf("%c",&s);
	if((s>='A')&&(s<='Z')){
		printf("%c is capital Alphabate",s);
	}
	else if((s>='a')&&(s<='z')){
		printf("%c is small Alphabate",s);
	}
	else if(((s>='A')||(s<='Z'))&&((s>='a')||(s<='z'))){
		printf("%c is Digit",s);
	}
	else{
		printf("%c is Special",s);
	}
}
