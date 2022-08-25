#include<stdio.h>

void merge(int a[],int b[],int d[],int n,int m)
{
    int i,j,c;
    for(i=0,c=0;i<n;i++,c++)
        d[c]=a[i];
     for(i=0;i<m;i++,c++)
        d[c]=b[i];
}

int main()
{
	int n,m;
	printf("enter a limit for first array\n");
	scanf("%d",&n);

    printf("enter a limit for second array\n");
	scanf("%d",&m);
	
	int a[n],b[m],i,c;

    c=m+n;
    int d[c];
	printf("enter %d element for first array\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

    printf("enter %d element for second array\n",m);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	merge(a,b,d,n,m);

    for(i=0;i<c;i++)
        printf("%d    ",d[i]);
	return 0;
}
