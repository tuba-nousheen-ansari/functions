#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);

    for(;n>0;sum+=n%10,n/=10)
    {

    }
    printf("sum is %d\n",sum);
}