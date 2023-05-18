#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int num=0;
	while(n!=0)
	{
		num=(num*10)+(n%10);
		n=n/10;
	}
	while(num!=0)
	{
		if((num%10)%2==0)
		{
			printf("%d",(num%10));
			break;
		}
		num/=10;
	}
	return 0;
}
