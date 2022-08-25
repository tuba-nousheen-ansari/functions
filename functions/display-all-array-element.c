// sum of n number
#include<stdio.h>

void display(int n,int a[])
{
    if(n<=0)
        return;
    display(--n,a);
    printf("%d   ",a[n]);
}
int main()
{
	int n;

	printf("enter limit\n");
	scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
	
	display(n,a);
	return 0;
}
