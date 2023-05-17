#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	int i;
	int n2=n/10;
	while(n2!=0)
	{
		sum+=((n%10)*(n2%10));
		n/=10;
		n2/=10;
	}
	printf("sum %d",sum);
	return 0;
	
}