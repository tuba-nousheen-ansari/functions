// paliandrome
#include<stdio.h>

void pali(int n)
{
	int rev=0,temp=0,temp1;
	temp1=n;	

	do
	{
		temp=n%10;
		rev=temp+(rev*10);
		n=n/10;
	}while(n!=0);
	
	if(temp1==rev)
		printf("it is paliandrome");
	else
		printf("it is not paliandrome");
}
int main()
{
	int n;

	printf("enter number\n");
	scanf("%d",&n);

	pali(n);
	return 0;
}
