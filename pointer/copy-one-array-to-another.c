#include<stdio.h>

void print(int *a,int *b,int n)
{
   for(int i=0;i<n;i++)
       *(b+i)=*(a+i);

    for(int i=0;i<n;i++)
        printf("%d   ",*(b+i));
}

int main()
{
    int n;
    printf("enter limit\n");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    print(a,b,n);
    
}