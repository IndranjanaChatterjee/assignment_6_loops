#include<stdio.h>
int main()
{
	int n;
	int max=0,i=1,r;
	scanf("%d",&n);
	while(n!=0)
	{
		if((n%10)>max)
		{
			max=n%10;
			r=i;
		}
		n=n/10;
		i++;
		
	}
	printf("max %d pos %d",max,r);
	return 0;
}
