//Print following patterns.

#include<stdio.h>
void main(){
	int i,j,k=1,a=0;
	char A=65;
	
	for(i=1;i<=5;i++){				//a)Out put
		for(j=1;j<=i;j++){			// 1
			printf("%d ",k);		// 2 3
			k++; 	 				// 4 5 6
		}							// 7 8 9 10 
		printf("\n");				// 11 12 13 14 15
	}
	
	printf("\n");
	for(i=1;i<=5;i++){				//b)Out put
		for(j=1;j<=i;j++){			// 1
			if(a%2==0){				// 0 1
				printf("0 ");		// 0 1 0
			}						// 1 0 1 0
			else{					// 1 0 1 0 1
				printf("1 ");
			}
			a++;
		}
		printf("\n");
	}
		
	printf("\n");
	for(i=1;i<=5;i++){				//c)Out put
		for(j=1;j<i;j++){			// * * * * *
			printf(" ");			//  * * * *
		}							//   * * *
		for(j=i;j<=5;j++){			//    * *
			printf("* ");			//     *
		}
	    printf("\n");
    }
    
    printf("\n");
    for(i=1;i<=5;i++){				//d)Out put
    	for(j=1;j<=5-i;j++){		//     1
    		printf(" ");			//    A B
		}							//   1 2 3
		for(j=1;j<=i;j++){			//  C D E F
			if(i%2==0){				// 1 2 3 4 5
				printf("%c ",A);
				A++;
			}
			else{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=1;i<=5;i++){							//e)Out put
    	for(j=1;j<=5;j++){						// * * * * *
			if(j==1 || j==5 || i==1 || i==5){	// *       *
				printf("* ");					// *       *
			}									// *       *
			else{								// * * * * *
				printf("  ");
			}
		}
		printf("\n");
    }
}
