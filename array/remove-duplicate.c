#include<stdio.h>

void removeduplicate(int a[],int n)
{
    int i,k,j;
    for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
            if(a[i]==a[k])
            {
                for(j=k;j<n-1;j++)
                    a[j]=a[j+1];
                n--;
            }
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

    int a[n],i;
    printf("enter %d element \n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        
    removeduplicate(a,n);

}