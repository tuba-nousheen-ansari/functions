

#include<stdio.h>

int reverse(int n)
{
	int temp=0,rev=0;
	while(n!=0)	
	{
		temp=n%10;
		rev=temp+(rev*10);
		n=n/10;
	}
	return rev;
}
int main()
{
	int n;

	printf("enter number\n");
	scanf("%d",&n);

	
	printf("reverse number is : %d\n",reverse(n));
	return 0;
}
