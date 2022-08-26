#include<stdio.h>

void add(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("before swapping a is %d and b is %d\n",a,b);

    add(&a,&b);

    printf("after swapping a is %d and b is %d\n",a,b);
}