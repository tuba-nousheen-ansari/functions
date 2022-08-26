#include<stdio.h>

void print(int *a,int n)
{
    int temp;
   for(int i=0;i<n/2;i++)
   { 
        temp=*(a+i);
        *(a+i)=*(a+(n-i-1));
        *(a+(n-i-1))=temp;
   }
   printf("this is reverse array\n");
    for(int i=0;i<n;i++)
        printf("%d   ",*(a+i));
}

int main()
{
    int n;
    printf("enter limit\n");
    scanf("%d",&n);
    int a[n];
    printf("enter %d element for first array\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    print(a,n);
    
}