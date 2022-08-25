#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char x,d[100];
    int i=0;

    fp=fopen("compare1.txt","r");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        x=fgetc(fp);
        while(x!=EOF)
        {
            d[i]=x;
            i++;
            x=fgetc(fp);
        }
        d[i]='\0';
        fclose(fp);
    }

    fp=fopen("copy.txt","w");
    if(fp==NULL)
        printf("not found\n");
    else
    {
       fprintf(fp,"%s",d);
       fclose(fp);
    }
    return 0;
}