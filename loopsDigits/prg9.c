#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	int r=0,k;
	while(n!=0)
	{
		k=((n%10)*pow(10,r));
		printf(" %d",k);
		++r;
		
		n/=10;
	}
	
	return 0;
	
}