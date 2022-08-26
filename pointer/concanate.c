#include<stdio.h>
#include<string.h>
void check(char *a,char *b)
{
    int i,k=0;
    char c[100];
    for(i=0;a[i]!='\0';i++,k++)
       c[k]=*(a+i); 
  
    for(i=0;b[i]!='\0';i++,k++)
       c[k]=*(b+i); 
    c[k]='\0';

    printf("concanate string is %s\n",c);
}

int main()
{
    char a[50],b[50];
    printf("enter 1st string\n");
    gets(a);

    printf("enter 2nd string\n");
    gets(b);

    check(a,b);
}