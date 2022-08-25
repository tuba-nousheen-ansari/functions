
#include<stdio.h>

void identity(int a[][3],int c)
{
    int i,j,c1=0;
    for(i=0;i<c;i++)
	{	
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                if(a[i][j]==1)
                    continue;
                else
                {
                    c1=1;
                    break;
                }
            }
            else
            {
                if(a[i][j]==0)
                    continue;
                else
                {
                    c1=1;
                    break;
                }
            }
        }
        if(c1)
            break;
    }
    if(i==c)
        printf("identity\n");
    else
        printf("not identity\n");
}
int main()
{
	int c;
	printf("enter a limit for first array\n");
	scanf("%d",&c);
	
	int a[c][c],i,c1=0,j;
	printf("enter %d element for first array\n",c*c);
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
		printf("\n");
	}
			
	identity(a,c);
	printf("\n--------------------------------------------\n");	
	
	printf("\n");
	return 0;
}
