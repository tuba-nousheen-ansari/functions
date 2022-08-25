
#include<stdio.h>

int upper(int a[][3],int c)
{
    int i,j,res=0;
    printf("upper array is\n");
    for(i=1;i<c;i++)
	{	
		for(j=0;j<i;j++)
			res=res+a[i][j];
	}
    return res;
}
int main()
{
	int c;
	printf("enter a limit for array\n");
	scanf("%d",&c);
	
	int a[c][c],i,res=0,j;
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
	res=upper(a,c);
	printf("sum of upper triangle is %d\n",res);
	return 0;
}
