
#include<stdio.h>

void upper(int a[][3],int c)
{
    int i,j;
    printf("upper array is\n");
    for(i=1;i<c;i++)
	{	
		for(j=0;j<i;j++)
			printf("%d  ",a[i][j]);
	}
}
int main()
{
	int c;
	printf("enter a limit for array\n");
	scanf("%d",&c);
	
	int a[c][c],i,c1=0,j;
	printf("enter %d element for  array\n",c*c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
			
	printf("array is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
		
	printf("---------------------------------------------\n");
	upper(a,c);
	printf("\n");
	return 0;
}
