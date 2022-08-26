// five subject percentage 
// percentage=(value*100)/total value

#include<stdio.h>

//percentage function
float percentage(float h,float e,float c,float p,float m)
{
	float percentage;
	percentage=(p+m+c+h+e)*100/500;
	return percentage;
}

int main()
{
	float p,hindi,english,chemistry,physics,maths;

	printf("enter maths number:\n");
	scanf("%f",&maths);

	printf("enter chemistry number:\n");
	scanf("%f",&chemistry);

	printf("enter physics number:\n");
	scanf("%f",&physics);

	printf("enter hindi number:\n");
	scanf("%f",&hindi);

	printf("enter english number:\n");
	scanf("%f",&english);

	p=percentage(hindi,english,chemistry,physics,maths);

	printf("total percent is:%.2f%%\n",p);
	return 0;
}



