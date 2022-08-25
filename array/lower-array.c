
#include<stdio.h>

void lower(int a[][3],int c)
{
    int i,j;
    printf("lower array is \n");
    for(i=0;i<c-1;i++)
	{	
		for(j=i+1;j<c;j++)
				printf("%d  ",a[i][j]);
	}
			
}
int main()
{
	int c;
	printf("enter a limit for first array\n");
	scanf("%d",&c);
	
	int a[c][c],i,c1=0,j;
	printf("enter %d element for first array\n",c*c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
			
	printf("first array is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	lower(a,c);
	printf("\n--------------------------------------------\n");	
	
	printf("\n");
	return 0;
}
