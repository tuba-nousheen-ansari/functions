#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char x;

    fp=fopen("test.txt","r");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        x=fgetc(fp);
        while(x!=EOF)
        {
            printf("%c",x);
            x=fgetc(fp);
        }
    }
    fclose(fp);
    return 0;
}