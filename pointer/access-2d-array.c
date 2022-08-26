
#include<stdio.h>

void sort(int *a,int n)
{
    int temp,i,j;
    for(i=0;i<n*n;i++)
	{
		printf("%d   ",*(a+i));
	}
}
int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n][n],j,i;
	printf("enter %d element\n",n*n);
	for(i=0;i<n;i++)
        for(j=0;j<n;j++)
		    scanf("%d",&a[i][j]);

    sort(a,n);
	return 0;
}