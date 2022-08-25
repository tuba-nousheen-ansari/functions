#include<stdio.h>

void deleteelement(int a[],int n,int p)
{
    int i,j;

    for(i=0;i<n;i++)
    {
        if(p-1==i)
        {
            for(j=i+1;j<n;j++)
                a[j-1]=a[j];
            n--;
        }
    }

    printf("array is:\n");
    for(i=0;i<n;i++)
        printf("%d    ",a[i]);
}

int main()
{
    int n;
    printf("enter array limit\n");
    scanf("%d",&n);

    int a[n],i,p;
    printf("enter %d element \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter a position\n");
    scanf("%d",&p);
    
    deleteelement(a,n,p);

}