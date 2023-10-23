#include<stdio.h>
void main()
{
 int month;
 printf("enter the month:");
 scanf("%d",&month);
 if(month>=1&&month<=12)
 {
  switch(month)
 {
 	case 2:
 		printf("28 days");
 		break;

 	case 4:
 	case 6:
 	case 9:
 	case 11:
 	 printf("30 days");
	 break;
	default :
	 	printf("31 days");
	 	break;
}

}
else {
	printf("invalid month");
	
}
}
 
		 
		 
