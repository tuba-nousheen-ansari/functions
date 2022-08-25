#include<stdio.h>
#include<stdlib.h>
void prime(int n)
{
   int i,f=0,j;
    for(i=1;i<n;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("%d is prime\n",i);
        f=0;
    }
}

int main()
{
    int n;
    printf("enter a interval\n");
    scanf("%d",&n);
    prime(n);
        
}