#include<stdio.h>

void reverse(int a[],int n)
{
    int i,temp,t=0,t1=0,j;
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

    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				temp=a[j];
				b[j]=b[i];
				b[i]=temp;
			}	
		}
	}

     for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(c[i]>c[j])
			{
				temp=c[j];
				c[j]=c[i];
				c[i]=temp;
			}	
		}
	}

    printf("sort even is:\n");
    for(i=0;i<t;i++)
        printf("%d   ",b[i]);
    printf("\nsort odd is:\n");
    for(i=0;i<t1;i++)
        printf("%d   ",c[i]);
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
