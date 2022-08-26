#include<stdio.h>
#include<string.h>
void check(char *a,int n)
{
    int i;
    char temp;

    for(i=0;i<n/2;i++)
    {
        temp=*(a+i);
        *(a+i)=*(a+(n-i-1));
        *(a+(n-i-1))=temp;
    }
}

int main()
{
    char a[50];
    gets(a);

    int i;
   

    for(i=0;a[i]!='\0';i++);
    check(a,i);
    printf("reverse string:%s\n",a);
}