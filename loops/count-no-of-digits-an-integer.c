// sum of n number
#include<stdio.h>

int count(int n)
{
	int i=0,sum=0;
	while(n!=0)
	{
		n=n/10;
		sum++;
	}
	return sum;
}
int main()
{
	int n;

	printf("enter number\n");
	scanf("%d",&n);

	
	printf("digits in this %d number is : %d\n",n,count(n));
	return 0;
}
