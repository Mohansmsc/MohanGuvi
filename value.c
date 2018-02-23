#include<stdio.h>
void main()
{
int x[]={0,1,2,3,4,5,6,7,8,9};
int sum=0,n,k,i;
 printf("enter n value");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    printf("%d",x[i]);
  printf("enter K value");
  scanf("%d",&k);
  for(i=0;i<=k;K++)
  {
    sum=sum+x[i];
  }
  printf("%d",sum);
}
