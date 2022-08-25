#include<stdio.h>

int power(int p,int n,int res)
{
	res=res*n;
    if(p<=1)
        return res;
    power(--p,n,res);
}

int main()
{
	int a,b,res=1;
	printf("enter a power\n");
	scanf("%d",&a);

    printf("enter a number\n");
	scanf("%d",&b);
	
	res=power(a,b,res);
	printf("answer = %d\n",res);
	return 0;
}
