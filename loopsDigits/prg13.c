#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	int i;
	while(n!=0)
	{
		if((n%10)%2 == 0)
		{
		
		printf("sum %d",(n%10));
		break;
	    }
		n/=10;
		
	}
	
	return 0;
	
}