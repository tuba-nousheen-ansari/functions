
#include<stdio.h>

int transpose1(int a[][3],int b[][3],int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
	{	
		for(j=0;j<n;j++)
          b[i][j]=a[j][i];
	}	

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(a[i][j]!=b[i][j])
            {
                c=1;
                break;
            }
        if(c)
            break;
    }

    if(c)
        printf("its not symmetric\n");
    else
        printf("symmetric\n");
}
int main()
{
	int c;
	printf("enter a limit for first array\n");
	scanf("%d",&c);
	
	int a[c][c],b[c][c],i,j;
	printf("enter %d element for first array\n",c*c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
			
	printf("array is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	transpose1(a,b,c);
   
	return 0;
}
 