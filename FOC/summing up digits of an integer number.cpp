#include<stdio.h>
int main()
{
	int n,t,r,sum=0;
	printf("\n Enter a number:");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t&10;
		sum+=r;
		t/=10;
	}
	printf("sum of the digits= %d",sum);
	return 0;
}
