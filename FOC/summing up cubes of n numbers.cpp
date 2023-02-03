#include<stdio.h>
int main()
{
	int a=1,sum=0,n;
	printf("\nEnter a number:");
	scanf("%d",&n);
	while (a<=n)
	{
		sum= sum+(a*a*a);
		a=a+1;
	}
	printf("\n sum=%d",sum);
	return 0;
}
