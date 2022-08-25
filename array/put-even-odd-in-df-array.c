#include<stdio.h>

void reverse(int a[],int n)
{
    int t=0,t1=0,i;
    int b[n],c[n];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[t]=a[i];
            t++;
        }
        else    
        {
            c[t1]=a[i];
            t1++;
        }
    }

    printf("even array:\n");
    for(i=0;a[i]<=t;i++)
        printf("%d    ",b[i]);

    printf("\n");
    printf("odd array:\n");
    for(i=0;a[i]<=t1;i++)
        printf("%d    ",c[i]);
}

int main()
{
	int n;
	printf("enter a limit\n");
	scanf("%d",&n);

	int a[n],i;

	printf("enter %d element \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	reverse(a,n);

	return 0;
}
