#include <stdio.h>
int main(void) {
int x,y,temp,result=0,rem;
scanf("%d%d",&x,&y);
for(int i=x+1;i<y;i++)
{
temp=i;
while(temp!=0)
{
	rem=temp%10;
	result+=rem*rem*rem;
	temp=temp/10;
}
if(i==result)
{
	printf("%d\n",i);
}
}
	return 0;
}
