#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,k=0,i=0;
	scanf("%d",&n);
	while(n!=0)
	{
		sum+=n;
		n/=10;
	}
	printf("sum %d",sum);
	return 0;
}
