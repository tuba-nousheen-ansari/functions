
#include<stdio.h>

void sort(int *a,int n)
{
    int temp,i,j;
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=temp;
			}	
		}
	}
}
int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

    sort(a,n);

    printf("sort array is:\n");
    for(i=0;i<n;i++)
        printf("%d   ",a[i]);
	return 0;
}