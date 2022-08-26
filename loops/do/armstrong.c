#include<stdio.h>

void arm(int n)
{
	int sum=0,temp=0,temp1;
	temp1=n;	

	do
	{
		temp=n%10;
		sum=sum+(temp*temp*temp);
		n=n/10;
	}while(n!=0);
	
	if(temp1==sum)
		printf("it is armstrong\n");
	else
		printf("it is not armstrong\n");
}
int main()
{
	int n;

	printf("enter number\n");
	scanf("%d",&n);
	
	arm(n);
	
	return 0;
}
