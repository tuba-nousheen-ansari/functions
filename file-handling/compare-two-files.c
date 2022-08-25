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

    int f2=0;
    for(i=0;f[i]!='\0';i++)
       if(f[i]!=f1[i])
       {
            f2=1;
            break;
       }
    if(f2)
        printf("both file are not same\n");
    else    
        printf("both file same\n");

    return 0;
}