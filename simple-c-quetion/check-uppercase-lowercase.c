#include<stdio.h>

int check(char);

int main()
{
	char n;
	int c;
	printf("enter a character\n");
	scanf("%c",&n);

	c=check(n);
	if(c==1)
		printf("uppercase\n");
	else if(c==2)
		printf("lowercase\n");
	else if(c==3)
		printf("positive digit\n");
	else 
		printf("special character\n");
	return 0;
}


int check(char c)
{
	if(c>=65&&c<=90)
		return 1;
	else if(c>=97&&c<=122)
		return 2;
	else if(c>=48&&c<=59)
		return 3;
	else
		return 4;
	
}
