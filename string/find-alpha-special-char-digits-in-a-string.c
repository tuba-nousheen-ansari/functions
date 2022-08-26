#include<stdio.h>

void check(char a[])
{
	int i,a1=0,d=0,s=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            a1++;
        else if(a[i]>=48&&a[i]<=58)
            d++;
        else
            s++;
    }
    printf("alphabet=%d   digit=%d     special=%d\n",a1,d,s);
}

int main()
{
	char a[50];
	printf("enter a string\n");
	scanf("%s",&a);
	
	check(a);
	return 0;
}
