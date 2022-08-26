#include<stdio.h>
#include<string.h>
void check(char a[])
{
    int i,f=0,j,k,t=1;
    char temp;
    for(i=0;a[i]!='\0';i++)
    {
        f=0;
        if(a[i]==1)
            continue;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                a[j]=1;
                f++;
            }
        } 
        if(f>=t)
        {
            temp=a[i];
            t=f;
            printf("%c = %d\n",temp,t+1);
        }
    }
   
}

int main()
{
    char a[50];
    gets(a);

    int i;
    
    check(a);
}