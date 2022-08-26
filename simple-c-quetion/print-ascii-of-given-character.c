#include<stdio.h>

void ascii(char);

//main function()
int main()
{
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	
	ascii(c);
	return 0;
}

//ascii function
void ascii(char c)
{
	printf("ascii of %c characteer is %d\n",c,c);
}
