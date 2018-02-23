#include<stdio.h>
int main()
{
char a[]="Hello";
int i,r;
printf("\renter the limit\r");
scanf("%d",&r);
for(i=0;i<r;i++)
{
printf("\r%s",a);
}
}
