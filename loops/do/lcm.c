#include<stdio.h>

int lcm(int a,int b)
{
	int l,t;
	do
	{
		if(l%a==0&&l%b==0)
			break;
		l++;
	}while(l<=a*b);
	return l;
			
}

int main()
{
	int a,b,l;
	printf("enter two number\n");
	scanf("%d%d",&a,&b);
	
	l=lcm(a,b);
    printf("lcm is %d\n",l);
	return 0;
}
