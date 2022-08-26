#include<stdio.h>

int add(char *a)
{
    int i;
    for(i=0;*(a+i)!='\0';i++);
    return i;
}

int main()
{
    char a[50];
    int c;
    printf("enter string\n");
    gets(a);

    c=add(a);

    printf("length is %d\n",c);
}