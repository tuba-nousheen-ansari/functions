#include<stdio.h>
#include<string.h>
void check(char a[])
{
    int i,f=0,j,k,t=1;
    char temp;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
              temp=a[i];
        } 
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==temp)
        {
            for(j=i;a[j]!='\0';j++)
                a[j]=a[j+1];
            f++;
            break;
        }
    }
    printf("%s\n",a);
   
}

int main()
{
    char a[50];
    gets(a);

    int i;
    
    check(a);
}