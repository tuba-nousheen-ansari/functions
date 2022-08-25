#include<stdio.h>

int removeduplicate(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                    a[k]=a[k+1];
                n--;
            }
        }
    }
    return n;
}

int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	n=removeduplicate(a,n);

    for(i=0;i<n;i++)
        printf("%d    ",a[i]);
	return 0;
}
