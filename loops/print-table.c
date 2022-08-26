#include<stdio.h>

void fibo(int n)
{
    int i;
	for(i=1;i<=10;i++)
        printf("%dX%d=%d\n",n,i,n*i);
}
int main()
{
	int n;

	printf("enter a number\n");
	scanf("%d",&n);

	
	fibo(n);
	return 0;
}
