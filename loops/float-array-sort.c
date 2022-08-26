#include<stdio.h>

void sort(float a[],int n)
{
	int i,j;
	float temp;
		
	for(i=0;i<n;i++)
		printf("%f  ",a[i]);
		
	printf("\n");
	
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
		printf("%f  ",a[i]);
		
	printf("\n");
}



int main()
{
	int n,i;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	float a[n];
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	sort(a,n);
		
	printf("\n");
}
