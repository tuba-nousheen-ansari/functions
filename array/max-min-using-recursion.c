#include<stdio.h>

int max,min;
void maxmin(int a[],int n)
{
    if(n<0)
        return;

    maxmin(a,--n);
    if(max<a[n+1])
        max=a[n+1];
    if(min>a[n+1])
        min=a[n+1];
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

    max=a[0];
    min=a[0];

    maxmin(a,n=n-1);
    printf("max=%d   min=%d\n",max,min);

}