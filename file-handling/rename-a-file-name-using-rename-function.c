#include<stdio.h>
  
int main()
{
    char oldname[50],newname[50];

    printf("enter a old name\n");
    gets(oldname);

    printf("enter a new name\n");
    gets(newname);

    int value;
    value = rename(oldname, newname);
  
    if(!value)
    {
        printf("%s File name changed successfully with new name\n",oldname,newname);
    }
    else
    {
        perror("Error\n");
    }
    return 0;
}