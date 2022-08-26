#include<stdio.h>
#include<string.h>
void check(char a[],char b[])
{
    int j,i,c=0,k;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;a[j]!='\0';j++)
            if(a[i]==b[j])
            {
                for(k=j;b[k]!='\0';k++)
                    b[k]=b[k+1];
                b[k]='\0';
                c++;
                break;
            }
    }
    if(c==strlen(a))
        printf("it is anagram\n");
    else   
         printf("it is not anagram\n");
}

int main()
{
    char a[50],b[50];
    printf("enter a first string\n");
    gets(a);

    printf("enter a second string\n");
    gets(b);
    
    check(a,b);
}