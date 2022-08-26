#include<stdio.h>
#include<string.h>
void check(char a[])
{
    int i,f=0,j;
    char temp;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
            if(a[i]==a[j])
            {
                f=1;
                temp=a[i];
            }
                
    }
    if(f)
        printf("first occurance is %c\n",temp);
    else
        printf("there is no first occurance\n");
}

int main()
{
    char a[50];
    gets(a);

    int i;
    
    check(a);
}