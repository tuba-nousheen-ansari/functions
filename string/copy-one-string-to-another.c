#include<stdio.h>
#include<string.h>
void check(char a[])
{
    int i;
    char b[50];
    for(i=0;a[i]!='\0';i++)
       b[i]=a[i]; 
    b[i]='\0';
    printf("copy string is %s\n",b);
}

int main()
{
    char a[50];
    gets(a);

    check(a);
    printf("original string is %s\n",a);

}