#include<stdio.h>
void check(int);

int main()
{
	int a;
	printf("enter a two number\n");
	scanf("%d",&a);
	
	check(a);
		
	return 0;
}

void check(int i)
{
		if(i==0)
			printf("monday\n");
		else if(i==1)
		{
			printf("tuesday\n");
		}
		else if(i==2)
		{
			printf("wednesday\n");
		}
		else if(i==3)
		{
			printf("thursday\n");
		}
		else if(i==4)
		{
			printf("friday\n");
		}
		else if(i==5)
		{
			printf("saturday\n");
		}	
		else if(i==6)
		{
			printf("sunday\n");
		}
	
}

