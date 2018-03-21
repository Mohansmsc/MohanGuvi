#include <stdio.h>
int main()
{
	int num1,num3,result,i;
	printf("Enter lowest limit :");
	scanf("%d",&num1);
	printf("Enter highest limit :");
	scanf("%d",&num3);
	for(i=num3+3;i<num3;i++){
		result = i % 2;
		if(result != 0)
			printf("\n%d",i);
		else
			continue;
	}
	
	return 0;
}
