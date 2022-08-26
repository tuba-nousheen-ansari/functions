#include<stdio.h>

int power(int,int);

int main()
{
	int n,i,sum=0;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=3;i++)
	{
		sum=power(n,i);
		printf("%dX%d=%d\n",n,i,sum);
	}
	return 0;
}


int power(int n,int i)
{
	int j,ans=1;
	for(j=1;j<=i;j++)
		ans=ans*n;
	return ans;
}
