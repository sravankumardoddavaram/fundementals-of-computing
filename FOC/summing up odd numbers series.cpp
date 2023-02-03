#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("\nEnter a number:");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+1;
		i=i+2;
	}
	printf("sum=%d",sum);
	return 0;
}
