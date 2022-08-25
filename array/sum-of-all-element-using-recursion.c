#include<stdio.h>
static int sum1=0;
void sum(int a[],int n)
{
    if(n<0)
        return;

    sum1=a[n]+sum1;
    sum(a,--n);
}

int main()
{
    int n;
    printf("enter array limit\n");
    scanf("%d",&n);

    int a[n],i;
    printf("enter %d element \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sum(a,--n);
    printf("%d\n",sum1);


}