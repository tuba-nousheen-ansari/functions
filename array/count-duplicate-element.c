#include<stdio.h>

void count(int a[],int n)
{
    int i,j,k,c=1;
	
	for(i=0;i<n-1;i++)
	{
        if(a[i]==1)
            continue;
		for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=1;
                c++;
            }
        }
        if(c)
            printf("%d element found %d times\n",a[i],c);
        c=1;
	}
}

int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],i,e,p;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
        
	count(a,n);
	
	return 0;
}
