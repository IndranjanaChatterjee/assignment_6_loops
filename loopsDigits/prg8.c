#include<stdio.h>
#include<math.h>
int main()
{
	int n,n2,sum=0;
	printf("enter two number");
	scanf("%d%d",&n,&n2);
	int i;
	while(n!=0)
	{
		sum+=((n%10)*(n2%10));
		n/=10;
		n2/=10;
	}
	printf("sum %d",sum);
	return 0;
	
}