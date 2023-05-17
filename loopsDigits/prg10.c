#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	int i;
	while(n!=0)
	{
		if((n%10)%2 == 0)
		{
		
		sum+=(n%10);
	}
		n/=10;
		
	}
	printf("sum %d",sum);
	return 0;
	
}