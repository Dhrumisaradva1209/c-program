//print first 50 numbers in series 1, 4, 7, 10…
#include<stdio.h>
void main()
{
	int count=1,b=1;
	while(count<51)
	{
		printf("%d,",b);
		b=b+3;
		count++;
}
}
