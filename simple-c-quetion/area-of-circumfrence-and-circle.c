#include<stdio.h>

void area_circle(float);
void area_circum(float);

//main function()
int main()
{
	int c;
	float r;
	
	printf("1.area of circle\n");
	printf("2.area of circumfrence\n");
	printf("enter a your choice\n");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("enter a radious\n");
			scanf("%f",&r);
			area_circle(r);
			break;
			
		case 2:
			printf("enter a radious\n");
			scanf("%f",&r);
			area_circum(r);
			break;
	}
	return 0;
}

//area_circle function
void area_circle(float c)
{
	float area;
	area=3.14*c*c;
	printf("area of circle is %f\n",area);
}

//area_circum function
void area_circum(float c)
{
	float area;
	area=2*3.14*c;
	printf("area of circle is %f\n",area);
}
