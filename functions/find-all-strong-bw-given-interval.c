#include<stdio.h>
#include<stdlib.h>
void prime(int n)
{
   int t,rev=0,i,p;
    for(i=1;i<n;i++)
    {
        t=i;
        while(t!=0)
        {
                p=t%10;
                rev=p*p*p+rev;
                t=t/10;
        }
        if(rev==i)
                printf("%d is armstrong\n",i);
        rev=0;
    }
}

int main()
{
    int n;
    printf("enter a interval\n");
    scanf("%d",&n);
    prime(n);
        
}