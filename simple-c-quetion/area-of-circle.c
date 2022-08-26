#include<stdio.h>
float area(float);

int main()
{
	float f;
	printf("enter a area\n");
	scanf("%f",&f);
	
	float an=area(f);
	printf("area is %f\n",an);
	return 0;
}

float area(float f)
{
	float a;
	a=2*3.14*f*f;
	return a;
	
}
