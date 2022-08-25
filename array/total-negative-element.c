
#include<stdio.h>

void evenodd(int a[],int n)
{
    int i,ec=0;
    for (i = 0;i<n;i++)
    {
        if(a[i]<0)
            ec++;
    }
    printf("total=%d\n",ec);
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
	
	evenodd(a,n);

	return 0;
}
