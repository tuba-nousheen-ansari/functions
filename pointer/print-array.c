#include<stdio.h>

void print(int *a,int n)
{
   for(int i=0;i<n;i++)
        printf("%d   ",*(a+i));
}

int main()
{
    int n;
    printf("enter limit\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    print(a,n);
    
}