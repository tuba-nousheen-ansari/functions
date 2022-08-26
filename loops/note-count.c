//note count
#include<stdio.h>


void count(unsigned int n)
{
	int n1,n2,n3,n4,n5,n6,n7;
	n1=n2=n3=n4=n5=n6=n7=0;
	if(n<10)
	{
		printf("invalid amount\n");
		return ;
	}

	if(n%2000)
	{
		n1=n/2000;
		n=n%2000;
	}
	
	if(n%500)
	{
		n2=n/500;
		n=n%500;
	}
	
	if(n%200)
	{
		n3=n/200;
		n=n%200;
	}
	
	if(n%100)
	{
		n4=n/100;
		n=n%100;
	}
	
	if(n%50)
	{
		n5=n/50;
		n=n%50;
	}
	
	if(n%20)
	{
		n6=n/20;
		n=n%20;
	}
	
	if(n%10<9)
	{
		n7=n/10;
		n=n%10;
	}
	

	printf("2000\t500\t200\t100\t50\t20\t10\n");
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",n1,n2,n3,n4,n5,n6,n7);

	if(n<5&&n>=1)
		printf("notes not available for 2 and 1\n");

}
int main()
{
	unsigned int n;
	
	printf("enter money\n");
	scanf("%u",&n);

	count(n);	
	return 0;
}
