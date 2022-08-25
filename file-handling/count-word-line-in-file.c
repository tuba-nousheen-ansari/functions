#include<stdio.h>

int main()
{
    FILE *fp=NULL;
    char x,f[100];
    int w=0,c=0,l=1;

    fp=fopen("compare1.txt","r");
    if(fp==NULL)
        printf("not found\n");
    else
    {
        x=fgetc(fp);
        while(x!=EOF)
        {
            c++;
            if(x==32)
                w++;
            if(x==10)
                l++;
                
            x=fgetc(fp);
        }
    }
    fclose(fp);
    printf("total line=%d\ntotal word=%d\ntotal character=%d\n",l,w,c);
    return 0;
}