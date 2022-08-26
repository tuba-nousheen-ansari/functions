// sum of n number
#include<stdio.h>

int count(int n)
{
	int i=0,sum=0;
	do
	{
		n=n/10;
		sum++;
	}while(n!=0);
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
