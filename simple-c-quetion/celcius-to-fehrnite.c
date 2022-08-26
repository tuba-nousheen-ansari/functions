//temprature to fehranite
#include<stdio.h>

float celcius(float c)
{
	float fehrnite;
	fehrnite=((9/5.0f)*c)+32;
	return fehrnite;

}

int main()
{
	float cel;

	printf("enter degree to change celcius to fehrnite\n");
	scanf("%f",&cel);

	printf("fehrnite is %f",celcius(cel));
	
	return 0;
}
