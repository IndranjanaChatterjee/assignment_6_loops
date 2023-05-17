#include<stdio.h>
#include<math.h>
int main()
{
	int n,r;
	printf("enter a number");
	scanf("%d",&n);
	r=(int)(log10(n)+1);
	int k=n/pow(10,(r-1));
	printf("required digit %d",k);
	return 0;
	
}