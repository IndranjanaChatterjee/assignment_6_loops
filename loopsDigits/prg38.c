#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,k=0,i=0;
	scanf("%d",&n);
	while(n!=0)
	{
		k=((n%10)*pow(10,i))+k;
		sum+=k;
		printf("%d\n",k);
		n=n/10;
		++i;
	}
	printf("sum %d",sum);
	return 0;
}
