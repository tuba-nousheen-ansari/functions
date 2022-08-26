#include<stdio.h>

int main()
{
    char a[50],c;

    int n;
    printf("enter a string\n");
    gets(a);

    printf("enter character for modify\n");
    scanf("%c",&c);

    printf("enter position\n");
    scanf("%d",&n);    

    for(int i=0;a[i]!='\0';i++)
    {
        if(i==n-1)
        {
            a[i]=c;
            printf("%c",a[i]);
            for(int j=0;j<20;j++)
                printf("*");
           
            break;
        }
        printf("%c",a[i]);
    }
}