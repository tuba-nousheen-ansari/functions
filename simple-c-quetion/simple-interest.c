//simple intrest
//formula s.i=(p*r*t)/100



#include<stdio.h>
void simple(int,float,float);

//main function
int main()
{
	int principale;
	float si,rate,time;

	printf("enter principale\n");
	scanf("%d",&principale);

	printf("enter rate of intersest\n");
	scanf("%f",&rate);

	printf("enter time\n");
	scanf("%f",&time);
	
	simple(principale,rate,time);
	
	return 0;
}


void simple(int p,float r,float t)
{
	float si;
	si=(p*r*t)/100;
	printf("simple interest is : %f\n",si);
}
