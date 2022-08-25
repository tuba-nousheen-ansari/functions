#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char d[100];

    fp=fopen("test.txt","a");
    if(fp==NULL)
        printf("not create\n");
    else
    {
        printf("enter a data\n");
        gets(d);

        fprintf(fp,"%s",d);

        printf("data saved successfully\n");
    }
    fclose(fp);
    return 0;
}