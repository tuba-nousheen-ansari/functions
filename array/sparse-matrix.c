
#include<stdio.h>

int scalar(int *a,int r,int c)
{
    int i,a1=0;
    for(i=0;i<r*c;i++)
	{	
		if(*(a+i)==0)
            a1++;
	}	

    if(a1>(r*c)/2)
        printf("it is sparse matrix\n");
    else
        printf("it is not a sparse matrix\n");
}
int main()
{
	int c,r;
	printf("enter a column\n");
	scanf("%d",&c);
	
    printf("enter a row\n");
	scanf("%d",&r);

	int a[r][c],i,j;
	printf("enter %d element for first array\n",c*r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}

	printf("array is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	scalar(a,r,c);
	return 0;
}
 