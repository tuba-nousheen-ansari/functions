#include<stdio.h>

void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
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
