
#include<stdio.h>

void subtract(int a[][3],int b[][3],int c[][3],int n)
{
    int i,j;
    printf("first array is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
		
	printf("\nsecond array is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d  ",b[i][j]);
		printf("\n");
	}
		
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i][j]-b[i][j];
}

int main()
{
	int n;
	printf("enter a limit for both array\n");
	scanf("%d",&n);
	
	
	int a[n][n],b[n][n],i,s,j,c[n][n];
	printf("enter %d element for first array\n",n*n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
	printf("enter %d element for second array\n",n*n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);	
		
	subtract(a,b,c,n);
	
	printf("\nsubtract array is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d  ",c[i][j]);
		printf("\n");
	}
		
	printf("\n");
	return 0;
}
