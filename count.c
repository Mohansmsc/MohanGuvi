#include <stdio.h>

int main(void) {
int no,count=0;
scanf("%d",&no);
do
{
	no=no/10;
count++;
}
while(no!=0);
printf("%d",count);
return 0;
}
