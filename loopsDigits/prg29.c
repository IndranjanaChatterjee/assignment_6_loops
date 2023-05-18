#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int max=0,i=1,r;
	scanf("%d",&n);
	int p=(int)(log10(n)+1);
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
	printf("max %d pos from first %d",max,(p+1-r));
	return 0;
}
