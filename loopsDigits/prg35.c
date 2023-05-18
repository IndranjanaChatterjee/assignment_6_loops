#include<stdio.h>
int main()
{
	int n,i=1,num=0;
	int k,r=1;
	printf("enter the number and the position");
	scanf("%d%d",&n,&k);
	while(n!=0)
	{
		if(r!=k)
		{
			num=num+((n%10)*i);
			i=i*10;
		}
		++r;
		n/=10;
		
	}
	printf("new num %d",num);
	return 0;
}
