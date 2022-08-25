#include<stdio.h>

void count(int a[],int n)
{
    int i,j,k,c=1;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c=0;
                a[j]=1;
            }
        }
        if(c==0)
            a[i]=1;
        c=1;
	}

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            continue;
        printf("unique element is %d    \n",a[i]);
    }
}

int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i,e,p;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
        
	count(a,n);
	
	return 0;
}
