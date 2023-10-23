// Print following patterns.

#include<stdio.h>
void main(){
	int i,j;						//	out put
	for(i=1;i<=5;i++){				//	*
		for(j=1;j<=i;j++){			//	**
			printf("*");			//	***
		}							//	****
		printf("\n");				//	*****
	}
	
	printf("\n");					//	out put
	for(i=1;i<=5;i++){				//	1
		for(j=1;j<=i;j++){			//	12
			printf("%d",j);			//	123
		}							//	1234
		printf("\n");				//	12345
	}
	
	printf("\n");					//	out put
	for(i=5;i>=1;i--){				//	5
		for(j=5;j>=i;j--){			//	54
			printf("%d",j);			//	543
		}							//	5432
		printf("\n");				//	54321
	}
	
	printf("\n");					//	out put
	for(i=1;i<=5;i++){				//	1
		for(j=1;j<=i;j++){			//	22
			printf("%d",i);			//	333
		}							//	4444
		printf("\n");				//	55555
	}
}
