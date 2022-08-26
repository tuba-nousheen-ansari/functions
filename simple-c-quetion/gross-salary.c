//gross salary
#include<stdio.h>
int main()
{
	unsigned int salary;
	float nsalary=0;
	printf("enter salary\n");
	scanf("%u",&salary);
	
	if(salary>=10000)
	{
		printf("salary is greater than 10k\n");
		nsalary=salary+(salary*10)/100.0f;
		nsalary=nsalary+(salary*5)/100.0f;
		nsalary=nsalary+(salary*3)/100.0f;
		printf("salary is : %.2f\n",nsalary);
	}	
	else
	{
		printf("salary is less than 10k\n");
		nsalary=salary+(salary*5)/100.0f;
		nsalary=nsalary+(salary*3)/100.0f;
		printf("salary is : %.2f\n",nsalary);
	}
	return 0;
}
