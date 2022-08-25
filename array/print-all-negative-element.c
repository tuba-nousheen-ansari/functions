#include<stdio.h>

void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]<0)
            printf("%d   ",a[i]);
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

    print(a,n);

}