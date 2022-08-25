#include<stdio.h>

void reverse(int a[],int n)
{
    int temp,i;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
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

    for(i=0;i<n;i++)
        printf("%d    ",a[i]);
	return 0;
}
