#include<stdio.h>
int check(int);

int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	if(check(n))
		printf("even\n");
	else
		printf("odd\n");
	return 0;
}

int check(int n)
{
	if(n%2)
		return 0;
	else
		return 1;
}

