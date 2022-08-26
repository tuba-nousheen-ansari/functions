#include<stdio.h>
int check(int,int);

int main()
{
	int a,b,c;
	printf("enter a two number\n");
	scanf("%d%d",&a,&b);
	
	c=check(a,b);
	printf("great number is %d\n",c);
	return 0;
}

int check(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}

