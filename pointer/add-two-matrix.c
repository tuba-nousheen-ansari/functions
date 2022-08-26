
#include<stdio.h>

void sort(int *a,int *b,int *c,int n)
{
    int i;
    for(i=0;i<n*n;i++)
		*(c+i)=*(a+i) + *(b+i);
}
int main()
{
	int n;
	printf("enter a limit for both array\n");
	scanf("%d",&n);
	
	int a[n][n],b[n][n],c[n][n],j,i;

    c[n][n]=0;
  
	printf("enter %d element for first array\n",n*n);
	for(i=0;i<n;i++)
        for(j=0;j<n;j++)
		    scanf("%d",&a[i][j]);

    printf("enter %d element for second array\n",n*n);
	for(i=0;i<n;i++)
        for(j=0;j<n;j++)
		    scanf("%d",&b[i][j]);

    printf("add of two array is\n");

    sort(a,b,c,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
		    printf("%d   ",c[i][j]);
        printf("\n");
    }
	return 0;
}