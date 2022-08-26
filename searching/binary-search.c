//binary search
#include<stdio.h>

void binary(int a[],int l,int r,int m,int t)
{
    int f=0;
    while(l<=r)
	{
		m=(l+r)/2;
		if(a[m]<t)
			l=m+1;
		else if(a[m]>t)
			r=m-1;
		else if(a[m]==t)
		{
			f=1;
			printf("element is found %d\n",a[m]);
			break;
		}
	}
	if(f==0)
		printf("not found\n");
}

int main()
{
	int n;
	printf("enter a limit of array\n");
	scanf("%d",&n);
	
	int a[n],l=0,m,r=n-1,t,i;
	
	printf("enter a %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("enter a element which you want to search in array\n");
	scanf("%d",&t);
		
    binary(a,l,r,m,t);
		
}
