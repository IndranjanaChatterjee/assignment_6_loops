#include<stdio.h>
int main()
{
	int n,i=0;
	int k;
	printf("enter the number and the position");
	scanf("%d%d",&n,&k);
	while(n!=0)
	{
		if((n%10)%2==0)
		{
			++i;
		}
		if(i==k)
		{
			printf("%d",(n%10));
			break;
		}
		n=n/10;
	}
	return 0;
}
