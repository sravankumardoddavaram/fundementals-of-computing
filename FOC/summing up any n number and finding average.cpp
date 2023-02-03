#include<stdio.h>
int main()
{
	int n,num,sum=0,i;
	float avg;
	printf("\Enter the number of elements:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("\nEnter the element:");
		scanf("%d",&num);
		sum+=num;
	}
	avg=sum/n;
	printf("nsum of %d numbers=%d",n,sum);
	printf("\nAverage of %d number= %0.2f",n,avg);
	return 0;
}
