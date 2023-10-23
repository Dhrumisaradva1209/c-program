//Print following patterns.

#include<stdio.h>
void main(){
	int i,j;
	
	for(i=1;i<=5;i++){				// Out put
		for(j=5;j>=i;j--){			// *****
			printf("*");			// ****
		}							// ***
		printf("\n");				// **
	}								// *
	
	printf("\n");
	for(i=1;i<=5;i++){				// Out put
		for(j=1;j<=6-i;j++){		// 12345
			printf("%d",j);			// 1234
		}							// 123
		printf("\n");				// 12
	}								// 1
		
	printf("\n");
	for(i=1;i<=5;i++){				// Out put
		for(j=1;j<=5-i;j++){		//     *
			printf(" ");			//    * *
		}							//   * * *
		for(j=1;j<=i;j++){			//  * * * *
		    printf("* ");			// * * * * * 
	    }
	    printf("\n");
	}
	
	printf("\n");
	for(i=1;i<=5;i++){				// Out put
		for(j=1;j<=5-i;j++){		//     1
			printf(" ");			//    1 2
		}							//   1 2 3
		for(j=1;j<=i;j++){			//  1 2 3 4
		    printf("%d ",j);		// 1 2 3 4 5 
	    }
	    printf("\n");
	}
}
