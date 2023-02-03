 #include<stdio.h>
int main()
{
	int n,num,r,sum=0;
	printf("\n Enter a number:");
	scanf("%d", &n);
	num=n;
	while(num!=0)
	{
		r=num%10;
		sum+=r*r*r;
		num/=10;
	}
    if (sum==n)
        printf("%d is an Armstrong number",n);
    else
	    printf("%d is not an Armstrong number",n);
	return 0;
}
	    
