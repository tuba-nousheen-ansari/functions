
#include<stdio.h>

void sum(int a[][3],int n)
{
    int i,j,res=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
                res=res+a[i][j];
        printf("sum of %d row is %d\n",i+1,res);
        res=0;
		printf("\n");
	}

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            res=a[j][i]+res;
        printf("sum %d column is %d\n",i+1,res);
        res=0;
        printf("\n");
    }
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
		
	sum(a,n);
	printf("---------------------------------------------------------\n");
    printf("diagonal sum is %d\n",res);
		
	printf("\n");
	return 0;
}
