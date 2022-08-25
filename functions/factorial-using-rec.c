#include<stdio.h>
#include<stdlib.h>
int fact=1;
int pali(int n)
{
    fact=fact*n;
    if(n<2)
        return fact;
    else    
        pali(--n);
}

int main()
{
    int n,i;
    printf("enter a number\n");
    scanf("%d",&n);
    i=pali(n);
    printf("fcat is %d\n",i);
}