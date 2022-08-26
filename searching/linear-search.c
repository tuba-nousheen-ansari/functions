//binary search
#include<stdio.h>

void linear(int a[],int t,int n)
{	
    int i,f=0;
	for(i=0;i<n;i++)
		if(a[i]==t)
		{
			f=1;
			printf("%d found",t);
			break;
		}
	
	if(f==0)
		printf("not found\n");
}
int main()
{
	int n;
	printf("enter a limit of array\n");
	scanf("%d",&n);
	
	int a[n],t,i;
	
	printf("enter a %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("enter a element which you want to search in array\n");
	scanf("%d",&t);
	
	linear(a,t,n);	
}
