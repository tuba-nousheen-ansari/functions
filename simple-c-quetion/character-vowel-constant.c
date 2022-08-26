#include<stdio.h>

int vowel_const(char);

int main()
{
	char n;
	printf("enter a character\n");
	scanf("%c",&n);

	if(vowel_const(n))
		printf("yes its vowel");
	else
		printf("its constant");
	return 0;
}


int vowel_const(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		return 1;
	else
		return 0;
	
}
