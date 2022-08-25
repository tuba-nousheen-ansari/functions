
#include<stdio.h>

int sum(int a[][3],int n)
{
    int i,j,res=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
            if(j==n-i-1)
                res=res+a[i][j];
		printf("\n");
	}
    return res;
}

int main()
{
	int n,res;
	printf("enter a limit for first array\n");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	printf("enter %d element for array\n",n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
		
	res=sum(a,n);
	printf("---------------------------------------------------------\n");
    printf("diagonal sum is %d\n",res);
		
	printf("\n");
	return 0;
}
