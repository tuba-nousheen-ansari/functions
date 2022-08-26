#include<stdio.h>
#include<string.h>

//abbreviated function
void abbreviated(char n,char n1[])
{
	printf("%c. %s",n,n1);
}


//main function
int main ()
{
	char name[50],name1[50];
	printf("enter your first name\n");
	gets(name);
	
	printf("enter your last name\n");
	gets(name1);
	
	abbreviated(name[0],name1);
	return 0;
}
