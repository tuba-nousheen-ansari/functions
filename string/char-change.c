#include<stdio.h>

void change(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'||a[i]<='Z')
            a[i]=a[i]+32;
        else if(a[i]>='a'||a[i]<='z')
            a[i]=a[i]-32;
    }
}

int main()
{
    char a[50];
    printf("enter a string\n");
    scanf("%s",a);

    printf("before change string is %s\n",a);
    change(a);
    printf("after change string is %s\n",a);
    return 0;
}