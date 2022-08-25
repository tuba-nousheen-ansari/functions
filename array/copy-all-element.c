
#include<stdio.h>

void copy(int a[],int b[],int n)
{
    int i;
    for (i = 0;i<n;i++)
        b[i]=a[i];
    
}
int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);
	
	int a[n],b[n],i;
	printf("enter %d element\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	copy(a,b,n);

    printf("A:\n");
    for(i=0;i<n;i++)
        printf("%d   ",b[i]);
    printf("\n");
    printf("B:\n");
    for(i=0;i<n;i++)
        printf("%d   ",b[i]);
	return 0;
}
