#include<stdio.h>
#include<math.h>
int main()
{
	int n,r;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter the number of digits to be deleted from last");
	scanf("%d",&r);
	int k=n/pow(10,(r-1));
	printf("required digit %d",(k%10));
	return 0;
	
}