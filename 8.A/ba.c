#include<stdio.h>
void main()
{
	float unit,bill,surcharge;
	printf("Enter number of unit:");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
		bill=unit*0.5;
		printf("%f",bill);
	}
	else if(unit<=150)
	{
		bill=(unit*0.5)+((unit-50)*0.75);
		printf("%f",bill);
	}
	else if(unit<=250)
	{
		bill=(unit*0.5)+(unit*0.75)+((unit-150)*1.20);
		printf("%f",bill);
	}
	else
	{
		bill=(unit*0.5)+(unit*0.75)+(unit*1.20)+((unit-250)*1.50);
		printf("%f",bill);
	}
	surcharge=bill*0.2;
	printf("%f",surcharge);
	
	
}
