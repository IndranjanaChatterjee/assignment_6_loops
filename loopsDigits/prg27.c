#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int i=1,sum=0;
	while(n!=0)
	{
		if((n%10)%2==0)
		{
			sum+=((n%10)*i);
		}
		else
		{
			sum+=(((n%10)-1)*i);
		}
		n=n/10;
		i=i*10;
	}
	printf("new num %d",sum);
	return 0;
}
