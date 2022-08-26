#include<stdio.h>

int add(int *a,int *b)
{
    return *a+*b;
}

int main()
{
    int a,b,c;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);

    c=add(&a,&b);

    printf("sum is %d\n",c);
}