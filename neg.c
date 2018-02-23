#include<stdio.h>
int main()
{
int i;
printf("enter the number to check:");
scanf("%d",&i);
if(i<0)
printf("\n %d is negative",i);
else if(i>0)
printf("\n %d is positive",i);
else
printf("\n the entered number is %d",i);
return 0;
}

