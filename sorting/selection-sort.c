#include<stdio.h>

void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
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
		
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
		
	printf("\n");
    bubble(a,n);
	printf("\n");
}
