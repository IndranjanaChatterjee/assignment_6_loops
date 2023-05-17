#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int i;
	i=(int)(log10(n)+1);
	printf("no. of digits %d",i);
	return 0;
	
}