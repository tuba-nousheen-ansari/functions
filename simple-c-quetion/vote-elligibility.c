#include<stdio.h>
int check(int);

int main()
{
	int a;
	printf("enter a two number\n");
	scanf("%d",&a);
	
	if(check(a))
		printf("yes \n");
	else
		printf("no\n");
		
	return 0;
}

int check(int a)
{
	if(a>=18)
		return 1;
	else
		return 0;
}

