
#include<stdio.h>

int second(int a[],int n,int p)
{
    int temp,i,j;
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}	
		}
	}
    return a[p-1];
}
int main()
{
	int n,p;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
    printf("enter a position\n");
    scanf("%d",&p);
	int res=second(a,n,p);

    printf("%d largest number is %d\n",p,res);

	return 0;
}
