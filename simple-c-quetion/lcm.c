#include<stdio.h>

int lcm(int a,int b)
{
	int l,t;
	for(l=1;l<=a*b;l++)
		if(l%a==0&&l%b==0)
			break;
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
