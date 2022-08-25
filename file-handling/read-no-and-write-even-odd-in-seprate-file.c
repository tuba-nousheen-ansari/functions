#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    int x;

    fp=fopen("number.txt","r");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        x=fgetc(fp);
        while(x!=EOF)
        {
            if(x%2==0)
            {
                FILE *fp=NULL;
                fp=fopen("even.txt","a");
                if(fp==NULL)
                    printf("not create\n");
                else
                {
                    fprintf(fp,"%d",x);
                    fclose(fp);
                }
            }
            else 
            {
                FILE *fp=NULL;
                fp=fopen("odd.txt","a");
                if(fp==NULL)
                    printf("not create\n");
                else
                {
                    fprintf(fp,"%d",x);
                    fclose(fp);
                }
            }

            int i,f=0;
            for(i=2;i<x;i++)
            {
                if(x%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                FILE *fp=NULL;
                fp=fopen("prime.txt","a");
                if(fp==NULL)
                    printf("not create\n");
                else
                {
                    fprintf(fp,"%d",x);
                    fclose(fp);
                }
            }
            x=fgetc(fp);
        }
    }
    fclose(fp);
    return 0;
}