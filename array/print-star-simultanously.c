#include<stdio.h>

void print(char a[])
{
    for(int i=0;a[i]!='\0';i++)
        printf("*");
        
    printf("\n");
}

int main()
{
    char a[100];
    printf("enter a string\n");
    gets(a);

    print(a);
    return 0;
}