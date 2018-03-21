#include <stdio.h>
int main(void) 
{
int start,end,i=0;
printf("enter starting number");
scanf("%d",&start);
printf("enter ending number");
scanf("%d",&end);
for(i=start+1;i<=end;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
return 0;
}
