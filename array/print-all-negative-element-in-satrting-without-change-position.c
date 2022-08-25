#include<stdio.h>

void print(int a[],int b[],int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
        if(a[i]>0)
        {
            b[c]=a[i];
            c++;
        }
            
    for(i=0;i<n;i++)
        if(a[i]<0)
        {
            b[c]=a[i];
            c++;
        }
}

int main()
{
    int n;
    printf("enter array limit\n");
    scanf("%d",&n);

    int a[n],b[n],i;
    printf("enter %d element \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    print(a,b,n);

    for(i=0;i<n;i++)
        printf("%d    ",b[i]);

}