#include<stdio.h>
#include<stdlib.h>
int pali(int n,int rev,int temp)
{
    if(n!=0)
    {
        temp=n%10;
        rev=rev+temp;
        n=n/10;
        pali(n,rev,temp);
    }
    else    
        return rev;
}

int main()
{
    int n,i,rev=0,temp;
    printf("enter a limit\n");
    scanf("%d",&n);
    i=pali(n,rev,temp);
    printf("sum is %d\n",i);
}