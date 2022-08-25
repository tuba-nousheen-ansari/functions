#include<stdio.h>

void insert(int a[],int n,int e,int p)
{
    int i;
    printf("before add element in array\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	
	for(i=n;i>=0;i--)
	{
		if(i==p-1)
		{
			a[i]=e;
			break;
		}
		else
			a[i]=a[i-1];
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
		
	printf("enter a element\n");
	scanf("%d",&e);

    printf("enter a position\n");
	scanf("%d",&p);
	
	insert(a,n,e,p);
	
	printf("after add element in array\n");
	for(i=0;i<=n;i++)
		printf("%d  ",a[i]);
	return 0;
}
