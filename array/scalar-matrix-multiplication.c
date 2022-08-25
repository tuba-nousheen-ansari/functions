
#include<stdio.h>

int scalar(int *a,int n,int s)
{
    int i;
    for(i=0;i<n*n;i++)
	{	
		*a = *a * s; 
        a++;
	}	
}
int main()
{
	int c,s;
	printf("enter a limit for first array\n");
	scanf("%d",&c);
	
	int a[c][c],i,j;
	printf("enter %d element for first array\n",c*c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
	
    printf("enter a number\n");
    scanf("%d",&s);

	printf("array is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	scalar(a,c,s);

    printf("array is after \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	return 0;
}
 