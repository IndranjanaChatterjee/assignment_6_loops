#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,k;
	printf("enter a  number");
	scanf("%d",&n);
	int a;
	a=n;
	n=n/10;
	while(n!=0)
	{
		k=(((n%10)*10)+(a%10));
		printf("%d\n",k);
		sum+=k;
		n=n/10;
		a=a/10;
	}
	printf("sum %d",sum);
	return 0;
	
}
