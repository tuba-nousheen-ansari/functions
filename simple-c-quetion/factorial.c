#include<stdio.h>
int fact(int);

int main()
{
	int f;
	printf("enter a number\n");
	scanf("%d",&f);
	
	int an=fact(f);
	printf("fact is %d\n",an);
	return 0;
}

int fact(int f)
{
	int i,fact=1;
	for(i=1;i<=f;i++)
		fact=fact*i;
	return fact;
	
}
