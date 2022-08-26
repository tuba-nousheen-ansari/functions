#include<stdio.h>

int main()
{
    int n,n1,i=1;
    printf("enter a two number\n");
    scanf("%d%d",&n,&n1);

    for(int j=0;j<n;j++)
        i++;
    for(int j=1;j<n1;j++)
        i++;

    printf("sum of %d and %d is %d\n",n,n1,i);
}