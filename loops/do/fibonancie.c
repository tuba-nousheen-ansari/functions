// sum of n number
#include<stdio.h>

void fibo(int n,int a,int b,int f)
{
	do
    {
        f=a+b;
        printf("%d   ",f);
        a=b;
        b=f;
        n--;
    }while(n!=0);
}
int main()
{
	int n,a=-1,b=1,f=0;

	printf("enter limit\n");
	scanf("%d",&n);

	
	fibo(n,a,b,f);
	return 0;
}
