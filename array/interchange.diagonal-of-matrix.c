
#include<stdio.h>

void change(int a[][3],int n)
{
    int i,j,res=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
        {
            res=a[i][i];
            a[i][i]=a[i][n-i-1];
            a[i][n-i-1]=res;
        }
        
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
	printf("before interchange array is %d\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d     ",a[i][j]);
        printf("\n");
    }

	change(a,n);
	printf("---------------------------------------------------------\n");
    printf("after interchange array is %d\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d     ",a[i][j]);
        printf("\n");
    }
		
	printf("\n");
	return 0;
}
