#include<stdio.h>
 
void check(int *a,int *b,int n)
{
    int i,e=1;
    for(i=0; i<n;i++)
      	if(*(a+i)!=*(b+i))
		{
			e = 0;
			break;
		}    
 	if(e == 1)
 		printf("\n Matrix a is Equal to Matrix b");		
	else
		printf("\n Matrix a is Not Equal to Matrix b");
}

int main()
{
    int n;
    
 	printf("\n enter a limit for both array \n  ");
 	scanf("%d",&n);
 
 	int i, j, a[n][n], b[n][n];
  
 	printf("\nEnter %d  Elements\n",n*n);
 	for(i=0;i<n;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   
 	printf("\nEnter %d  Elements\n",n*n);
 	for(i=0;i<n;i++)
  	{
   		for(j=0;j<n;j++)
    	{
      		scanf("%d", &b[i][j]);
    	}
  	}
  	
 	check(a,b,n);
 	return 0;
}