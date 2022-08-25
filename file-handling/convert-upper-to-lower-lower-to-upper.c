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
            if(x>=65&&x<=90)
                printf("%c",x+32);
            else
                printf("%c",x-32);
            x=fgetc(fp);
        }
    }
    fclose(fp);
    return 0;
}