//rotate array
#include<stdio.h>

void rotate(int a[],int n,int p)
{
    int i,j,temp;
    for(i=0;i<p;i++)
	{
		temp=a[n-1];
		for(j=n-i;j>i;j--)
			a[j]=a[j-1];
		a[i]=temp;
	}
}

int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i,p,j,temp;
	printf("enter %d number\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("enter a shifting number\n");
	scanf("%d",&p);	
	
	printf("\nbefore rotating\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	
	rotate(a,n,p);

	printf("\nafter rotating\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
		
	
	return 0;
}
