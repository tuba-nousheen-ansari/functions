#include<stdio.h>

int gcd(int a,int b)
{
	int l;
    l=a<b?a:b;
	for(l;l>=1;l--)
		if(a%l==0&&b%l==0)
			break;
	return l;
			
}

int main()
{
	int a,b,l;
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	
	l=gcd(a,b);
    printf("gcd is %d\n",l);
	return 0;
}
