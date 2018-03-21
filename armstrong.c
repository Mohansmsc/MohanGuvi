#include<studio.h>
void main()
{
int n, sum=0;
printf("enter the number");
while(n<=10000);
{
n=n%10;
sum=sum=(n*n*n);
n=n/10;
}
if(n==sum)
{
printf("It is armstrong number");
else
{
printf("It is not armstrong number");
}
}
