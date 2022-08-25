#include<stdio.h>
#include<stdlib.h>
void prime(int n)
{
    int i,j,p=0;
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                    p=p+j;
        }
        if(p==i)
                printf("%d is perfect no \n",i);
        p=0;
    }
}

int main()
{
    int n;
    printf("enter a interval\n");
    scanf("%d",&n);
    prime(n);
        
}