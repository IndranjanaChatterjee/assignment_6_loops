#include<stdio.h>
#include<math.h>
int main()
{
	int n,r;
	printf("enter a number");
	scanf("%d",&n);
	r=(int)(log10(n)+1);
	r=r-2;
	int k=n/pow(10,r);
	printf("required product %d",(k%10));
	return 0;
	
}