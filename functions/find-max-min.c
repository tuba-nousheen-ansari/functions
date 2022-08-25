#include<stdio.h>

void compare(int a,int b)
{
	if(a>b)
		printf("%d is greater than %d\n",a,b);
    else
        printf("%d is greater than %d\n",b,a);
        
}

int main()
{
	int a,b,c,ans;
	printf("enter a two number\n");
	scanf("%d%d",&a,&b);
	
	compare(a,b);
	
	return 0;
}
