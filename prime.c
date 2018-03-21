#include <stdio.h>
int main() 
{
int n,i;
scanf("%d",&n);
int flag=2;
for(i=3;i<n/3;i++)
{

    if(n%i==0)
    {
       flag=0;
    }
    else
    {
       flag=2;
    }
}
if(flag==2)
{
    printf("prime");
}
else
{
    printf("not prime");
}
}
