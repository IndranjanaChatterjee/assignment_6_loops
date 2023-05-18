#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int i=0,sum=0;
	while(n!=0)
	{
		if(i%2==0)
		{
			sum+=(n%10);
		}
		n=n/10;
		++i;
	}
	printf("sum %d",sum);
	return 0;
}
