#include<stdio.h>
#include<string.h>
void check(char a[],int n)
{
    int i,f=0;
    char b[50],temp;
    for(i=0;a[i]!='\0';i++)
        b[i]=a[i];
    b[i]='\0';

    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[i])
            continue;
        else
        {
            f=1;
            break;
        }
    }

    if(f)
        printf("string is not paliandrome\n");
    else
        printf("string is paliandrome\n");
}

int main()
{
    char a[50];
    gets(a);

    int i;
   

    for(i=0;a[i]!='\0';i++);
    check(a,i);
}