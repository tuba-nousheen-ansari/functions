#include<stdio.h>

int cube(int n)
{
    int c=1,i;
    for(i=0;i<3;i++)
        c=c*n;
}

int main()
{
    int n,c;
    printf("enter a number\n");
    scanf("%d",&n);

    c=cube(n);
    printf("%d cube is %d\n",n,c);
}