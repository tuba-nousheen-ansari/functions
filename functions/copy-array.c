#include<stdio.h>
#include<string.h>
void check(char *a,char *b)
{
    int i;
    
    for(i=0;a[i]!='\0';i++)
       *(b+i)=*(a+i); 
    *(b+i)='\0';
    printf("copy string is %s\n",b);
}

int main()
{
    char a[50],b[50];
    gets(a);

    check(a,b);

}