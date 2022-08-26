#include<stdio.h>
#include<string.h>

int size();

//main function
int main()
{
	int res;	
	res=size();
	
	if(res)
	{
		printf("%d\n",res);
	}
	else
		printf("invalid data type\n");
	return 0;
}


//size function
int size()
{
	char d[10],i;
	double t;
	int x;
	float y;
	printf("enter data type which size you want to know\n");
	//f gets(d,10,stdin);
        scanf("%s",d);
	if(strcmp(d,"int")==0)
		return sizeof(x);
	else if(strcmp(d,"float")==0)
		return sizeof(y);
	     else if(strcmp(d,"double")==0)
		   return sizeof(t);
	          else if(strcmp(d,"char")==0)
		     return sizeof(i);		
	

}
