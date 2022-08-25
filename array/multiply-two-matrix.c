
#include<stdio.h>

void multiply(int a[][3],int b[][3],int c1[][3],int c,int r)
{
    int i,j,k;
    printf("first array is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
		
	printf("\nsecond array is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d  ",b[i][j]);
		printf("\n");
	}
		
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			c1[i][j]=0;
			for(k=0;k<c;k++)
				c1[i][j]=c1[i][j]+a[i][k]*b[k][j];
		}		
	}
}

int main()
{
	int c,r;
	printf("enter a limit for first array\n");
	scanf("%d",&c);
	
	printf("enter a limit for second array\n");
	scanf("%d",&r);
	
	
	int a[c][r],b[c][r],i,j,c1[c][r],k;
	printf("enter %d element for first array\n",c*c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
		
	printf("enter %d element for second array\n",r*r);
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			scanf("%d",&b[i][j]);	
		printf("\n");
	}
		
	multiply(a,b,c1,c,r);
	printf("---------------------------------------------------------");
	printf("\nmultiplyL matrix is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d     ",c1[i][j]);
		printf("\n");
	}
		
	printf("\n");
	return 0;
}
