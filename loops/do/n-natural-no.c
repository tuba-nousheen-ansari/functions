// sum of n number
#include<stdio.h>

int sum(int n)
{
	int i=0,sum=0;
	do
	{
		sum=sum+i;
		i++;	
	}while(n>=i);
	return sum;
}
int main()
{
	int n;

	printf("enter number\n");
	scanf("%d",&n);

	
	printf("sum of first %d number is : %d\n",n,sum(n));
	return 0;
}
