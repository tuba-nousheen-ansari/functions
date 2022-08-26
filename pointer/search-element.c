#include<stdio.h>

void print(int *a,int n,int e)
{
    int f=0;
   for(int i=0;i<n;i++)
   { 
        if(*(a+i)==e)
        {
            printf("%d element found\n",*(a+i));
            f=1;
            break;
        }
   }
   if(f==0)
        printf("not found\n");
}

int main()
{
    int n,e;
    printf("enter limit\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element for first array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter a element\n");
    scanf("%d",&e);

    print(a,n,e);
    
}