#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,k=1,i=0;
	scanf("%d",&n);
	while(n!=0)
	{
		k=k*(n%10);
		sum+=k;
		printf("%d\n",k);
		n=n/10;
		++i;
	}
	printf("sum %d",sum);
	return 0;
}
