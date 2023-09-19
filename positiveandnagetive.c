#include <stdio.h>
void main()
{
    int x;
    printf("enter your value:-");
    scanf("%d",&x);
    if (x>0)
    {
      printf("this number is positive");
    }
    else if (x<0)
    {
        printf("this number is nagetive");
    }
    else
    {
        printf(" this number is zero");
    }
}