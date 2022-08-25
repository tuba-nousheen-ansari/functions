
#include<stdio.h>

void evenodd(int a[],int n)
{
    int i,ec=0,oc=0;
    for (i = 0;i<n;i++)
    {
        if(a[i]%2==0)
            ec++;
        else   
            oc++;
    }
    printf("even=%d   odd=%d\n",ec,oc);
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
