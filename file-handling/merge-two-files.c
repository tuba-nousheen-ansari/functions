#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char x,f[100],f1[100];
    int i=0;

    fp=fopen("compare1.txt","r");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        x=fgetc(fp);
        while(x!=EOF)
        {
            f[i]=x;
            i++;
            x=fgetc(fp);
        }
        f[i]='\0';
    }
    fclose(fp);
    i=0;
    fp=fopen("compare2.txt","r");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        x=fgetc(fp);
        while(x!=EOF)
        {
            f1[i]=x;
            i++;
            x=fgetc(fp);
        }
        f1[i]='\0';
    }
    fclose(fp);

    fp=fopen("merge.txt","a");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        fprintf(fp,"%s %s",f,f1);
    }
    fclose(fp);
    return 0;
}