#include<stdio.h>
void main()
{
 int a,b;
 char c;
 printf("enter choice");
 scanf("%c",&c);
 printf("enter value");
 scanf("%d %d",&a,&b);
 
 switch (c)
 {
 	case '+':
 		printf("add %d",a+b);
 		break;
 	case '-':
 		printf("sub %d",a-b);
 		break;
 	case '*':
 	    printf("mul %d",a*b);
 	    break;
 	case '/':
 		printf("div %d",a/b);
 		break;
 	
 	default:
 			printf("invalid");
 			break;
 		}
 	}
